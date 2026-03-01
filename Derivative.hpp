/**
 * @file Derivative.hpp
 * @brief Compile-time symbolic derivative computation using metaprogramming
 *
 * This file demonstrates template metaprogramming by representing
 * mathematical expressions as types and computing their derivatives
 * at compile-time.
 *
 * Expression types:
 *   Const<N>    — represents the constant N (integer)
 *   Var         — represents the variable x
 *   Add<L, R>   — represents L + R
 *   Mul<L, R>   — represents L * R
 *   Power<E, N> — represents E^N
 *
 * Students must implement the structures marked with "Must be implemented".
 *
 * Topics covered:
 * - Template metaprogramming
 * - Compile-time computation
 * - Recursive type definitions
 * - static constexpr evaluation
 * - Symbolic differentiation rules
 */

#ifndef DERIVATIVE_HPP
#define DERIVATIVE_HPP

#include <string>

namespace metaengine {

    // ============================================================
    //               EXPRESSION TYPE DEFINITIONS
    // ============================================================

    /**
     * @brief Represents a compile-time integer constant
     * @tparam N The constant value
     *
     * Must be implemented.
     * Members:
     *   static constexpr int eval(int x) — always returns N regardless of x
     *   static std::string toString() — returns the string representation of N
     */
    template <int N>
    struct Const {
        // ====== Must be implemented ======
    };

    /**
     * @brief Represents the variable x
     *
     * Must be implemented.
     * Members:
     *   static constexpr int eval(int x) — returns x
     *   static std::string toString() — returns "x"
     */
    struct Var {
        // ====== Must be implemented ======
    };

    /**
     * @brief Represents addition: L + R
     * @tparam L Left expression type
     * @tparam R Right expression type
     *
     * Must be implemented.
     * Members:
     *   static constexpr int eval(int x) — returns L::eval(x) + R::eval(x)
     *   static std::string toString() — returns "(" + L::toString() + " + " + R::toString() + ")"
     */
    template <typename L, typename R>
    struct Add {
        // ====== Must be implemented ======
    };

    /**
     * @brief Represents multiplication: L * R
     * @tparam L Left expression type
     * @tparam R Right expression type
     *
     * Must be implemented.
     * Members:
     *   static constexpr int eval(int x) — returns L::eval(x) * R::eval(x)
     *   static std::string toString() — returns "(" + L::toString() + " * " + R::toString() + ")"
     */
    template <typename L, typename R>
    struct Mul {
        // ====== Must be implemented ======
    };

    /**
     * @brief Represents power: E^N (expression E raised to integer power N)
     * @tparam E The base expression type
     * @tparam N The exponent (integer)
     *
     * Must be implemented.
     * Members:
     *   static constexpr int eval(int x):
     *     — Computes E::eval(x) raised to the power N
     *     — Use a constexpr helper or loop
     *     — Power of 0 returns 1
     *   static std::string toString() — returns "(" + E::toString() + "^" + std::to_string(N) + ")"
     */
    template <typename E, int N>
    struct Power {
        // ====== Must be implemented ======
    };

    // ============================================================
    //             COMPILE-TIME DERIVATIVE RULES
    // ============================================================
    //
    // Derivative rules:
    //   d/dx [Const<N>]   = Const<0>
    //   d/dx [Var]         = Const<1>
    //   d/dx [Add<L, R>]   = Add<d/dx[L], d/dx[R]>
    //   d/dx [Mul<L, R>]   = Add<Mul<d/dx[L], R>, Mul<L, d/dx[R]>>   (product rule)
    //   d/dx [Power<E, N>] = Mul<Mul<Const<N>, Power<E, N-1>>, d/dx[E]>  (chain rule)
    //

    /**
     * @brief Primary template for Derive — computes d/dx of an expression
     *
     * The "type" member alias represents the derivative expression type.
     */
    template <typename Expr>
    struct Derive;

    /**
     * @brief Derivative of a constant is 0
     * d/dx [Const<N>] = Const<0>
     * Must be implemented.
     */
    template <int N>
    struct Derive<Const<N>> {
        // ====== Must be implemented ======
        // using type = Const<0>;
    };

    /**
     * @brief Derivative of x is 1
     * d/dx [Var] = Const<1>
     * Must be implemented.
     */
    template <>
    struct Derive<Var> {
        // ====== Must be implemented ======
        // using type = Const<1>;
    };

    /**
     * @brief Derivative of sum: d/dx [L + R] = d/dx[L] + d/dx[R]
     * Must be implemented.
     */
    template <typename L, typename R>
    struct Derive<Add<L, R>> {
        // ====== Must be implemented ======
        // using type = Add<typename Derive<L>::type, typename Derive<R>::type>;
    };

    /**
     * @brief Derivative of product (product rule):
     *   d/dx [L * R] = d/dx[L] * R + L * d/dx[R]
     * Must be implemented.
     */
    template <typename L, typename R>
    struct Derive<Mul<L, R>> {
        // ====== Must be implemented ======
        // using type = Add<Mul<typename Derive<L>::type, R>,
        //                  Mul<L, typename Derive<R>::type>>;
    };

    /**
     * @brief Derivative of power (chain rule):
     *   d/dx [E^N] = N * E^(N-1) * d/dx[E]
     * Must be implemented.
     */
    template <typename E, int N>
    struct Derive<Power<E, N>> {
        // ====== Must be implemented ======
        // using type = Mul<Mul<Const<N>, Power<E, N-1>>, typename Derive<E>::type>;
    };

    /**
     * @brief Convenience alias for getting the derivative type
     * Usage: Derivative<Expr> is the derivative type of Expr
     */
    template <typename Expr>
    using Derivative = typename Derive<Expr>::type;

} // namespace metaengine

#endif // DERIVATIVE_HPP