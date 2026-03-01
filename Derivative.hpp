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
     */
    template <int N>
    struct Const {
        // ====== Must be implemented ======
    };

    /**
     * @brief Represents the variable x
     *
     * Must be implemented.
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
     */
    template <typename E, int N>
    struct Power {
        // ====== Must be implemented ======
    };

    // ============================================================
    //             COMPILE-TIME DERIVATIVE RULES
    // ============================================================

    /**
     * @brief Primary template for Derive — computes d/dx of an expression
     *
     * The "type" member alias represents the derivative expression type.
     */
    template <typename Expr>
    struct Derive;

    /**
     * @brief Derivative of a constant
     * Must be implemented.
     */
    template <int N>
    struct Derive<Const<N>> {
        // ====== Must be implemented ======

    };

    /**
     * @brief Derivative of Var
     * Must be implemented.
     */
    template <>
    struct Derive<Var> {
        // ====== Must be implemented ======
    };

    /**
     * @brief Derivative of Add<L, R>
     * Must be implemented.
     */
    template <typename L, typename R>
    struct Derive<Add<L, R>> {
        // ====== Must be implemented ======
    };

    /**
     * @brief Derivative of Mul<L, R>
     * Must be implemented.
     */
    template <typename L, typename R>
    struct Derive<Mul<L, R>> {
        // ====== Must be implemented ======

    };

    /**
     * @brief Derivative of Power<E, N>
     * Must be implemented.
     */
    template <typename E, int N>
    struct Derive<Power<E, N>> {
        // ====== Must be implemented ======
    };

    /**
     * @brief Convenience alias for getting the derivative type
     * Usage: Derivative<Expr> is the derivative type of Expr
     */
    template <typename Expr>
    using Derivative = typename Derive<Expr>::type;

} // namespace metaengine

#endif // DERIVATIVE_HPP