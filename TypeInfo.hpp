/**
 * @file TypeInfo.hpp
 * @brief Template class with full and partial specializations for type information
 *
 * This file demonstrates template specialization by providing compile-time
 * information about different types.
 *
 * Students must implement the specializations marked with "Must be implemented".
 *
 * Topics covered:
 * - Primary template
 * - Full specialization (for int, double, bool, std::string)
 * - Partial specialization (for pointers T*)
 * - Static constexpr members
 */

#ifndef TYPEINFO_HPP
#define TYPEINFO_HPP

#include <string>

namespace metaengine {

    // ============================================================
    //                    PRIMARY TEMPLATE
    // ============================================================

    /**
     * @brief Primary template for TypeInfo — provides default info
     * for any unknown type.
     *
     * Must be implemented.
     */
    template <typename T>
    struct TypeInfo {
        // ====== Must be implemented ======
    };

    // ============================================================
    //                  FULL SPECIALIZATIONS
    // ============================================================

    /**
     * @brief Full specialization for int
     *
     * Must be implemented.
     */
    template <>
    struct TypeInfo<int> {
        // ====== Must be implemented ======
    };

    /**
     * @brief Full specialization for double
     *
     * Must be implemented.
     */
    template <>
    struct TypeInfo<double> {
        // ====== Must be implemented ======
    };

    /**
     * @brief Full specialization for bool
     *
     * Must be implemented.
     */
    template <>
    struct TypeInfo<bool> {
        // ====== Must be implemented ======
    };

    /**
     * @brief Full specialization for std::string
     *
     * Must be implemented.
     */
    template <>
    struct TypeInfo<std::string> {
        // ====== Must be implemented ======
    };

    // ============================================================
    //                  PARTIAL SPECIALIZATION
    // ============================================================

    /**
     * @brief Partial specialization for any pointer type T*
     *
     * This demonstrates partial specialization — it applies to ALL pointer
     * types regardless of what T is.
     *
     * Must be implemented.
     */
    template <typename T>
    struct TypeInfo<T*> {
        // ====== Must be implemented ======
    };

} // namespace metaengine

#endif // TYPEINFO_HPP