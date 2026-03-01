/**
 * @file DecltypeUtils.hpp
 * @brief Utility functions demonstrating decltype and auto return types
 *
 * This file demonstrates the use of decltype to deduce types
 * at compile time, enabling generic code that adapts to
 * the types it operates on.
 *
 * Students must implement the functions marked with "Must be implemented".
 *
 * Topics covered:
 * - decltype for type deduction
 * - auto return type
 * - Trailing return types
 * - Type deduction in expressions
 */

#ifndef DECLTYPEUTILS_HPP
#define DECLTYPEUTILS_HPP

#include <string>
#include <type_traits>

namespace metaengine {

    // ============================================================
    //               DECLTYPE-BASED FUNCTIONS
    // ============================================================

    /**
     * @brief Add two values, deducing the return type with decltype
     *
     * Uses trailing return type syntax:
     *   auto add(const A& a, const B& b) -> decltype(a + b)
     *
     * This allows adding an int and a double, returning a double.
     *
     * @tparam A First operand type
     * @tparam B Second operand type
     * @return The sum, with type deduced by decltype(a + b)
     * Must be implemented.
     */
    template <typename A, typename B>
    auto add(const A& a, const B& b) -> decltype(a + b) {
        // ====== Must be implemented ======
    }

    /**
     * @brief Multiply two values, deducing the return type with decltype
     * Must be implemented.
     */
    template <typename A, typename B>
    auto multiply(const A& a, const B& b) -> decltype(a * b) {
        // ====== Must be implemented ======
    }

    /**
     * @brief Return the larger of two values, deducing return type
     *
     * Uses decltype to determine the common return type.
     * Comparison uses the < operator.
     *
     * @tparam A First type
     * @tparam B Second type
     * Must be implemented.
     */
    template <typename A, typename B>
    auto maxOf(const A& a, const B& b) -> decltype(a + b) {
        // ====== Must be implemented ======
        // Returns a if a >= b, else b.
        // The return type is decltype(a + b) which gives the common type.
    }

    /**
     * @brief Return the smaller of two values
     * Must be implemented.
     */
    template <typename A, typename B>
    auto minOf(const A& a, const B& b) -> decltype(a + b) {
        // ====== Must be implemented ======
    }

    // ============================================================
    //              DECLTYPE WITH TYPE CHECKING
    // ============================================================

    /**
     * @brief Check at compile time if the result of adding A+B is a floating point type
     *
     * Uses decltype and std::is_floating_point.
     *
     * @tparam A First type
     * @tparam B Second type
     * Must be implemented.
     *
     * Usage: isAddResultFloating<int, double>() returns true
     *        isAddResultFloating<int, int>() returns false
     */
    template <typename A, typename B>
    constexpr bool isAddResultFloating() {
        // ====== Must be implemented ======
        // Use: std::is_floating_point<decltype(std::declval<A>() + std::declval<B>())>::value
        return false; // placeholder
    }

    /**
     * @brief Check at compile time if the result of multiplying A*B is integral
     *
     * @tparam A First type
     * @tparam B Second type
     * Must be implemented.
     */
    template <typename A, typename B>
    constexpr bool isMulResultIntegral() {
        // ====== Must be implemented ======
        return false; // placeholder
    }

    /**
     * @brief Get a string description of the type produced by A + B
     *
     * Uses decltype and type traits:
     *   - Returns "floating-point" if the result is a floating-point type
     *   - Returns "integral" if the result is an integral type
     *   - Returns "other" otherwise
     *
     * @tparam A First type
     * @tparam B Second type
     * Must be implemented.
     */
    template <typename A, typename B>
    std::string addResultTypeName() {
        // ====== Must be implemented ======
        return ""; // placeholder
    }

} // namespace metaengine

#endif // DECLTYPEUTILS_HPP