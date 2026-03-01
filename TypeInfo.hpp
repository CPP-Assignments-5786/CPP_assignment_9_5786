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
     * Members:
     *   static constexpr const char* name = "Unknown";
     *   static constexpr bool is_numeric = false;
     *   static constexpr bool is_pointer = false;
     *   static constexpr int size = sizeof(T);
     *   static std::string describe() — returns "Unknown type of size <size> bytes"
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
     * Members:
     *   static constexpr const char* name = "int";
     *   static constexpr bool is_numeric = true;
     *   static constexpr bool is_pointer = false;
     *   static constexpr int size = sizeof(int);
     *   static constexpr int min_value = -2147483648;
     *   static constexpr int max_value = 2147483647;
     *   static std::string describe() — returns "int: numeric type, size 4 bytes, range [-2147483648, 2147483647]"
     */
    template <>
    struct TypeInfo<int> {
        // ====== Must be implemented ======
    };

    /**
     * @brief Full specialization for double
     *
     * Must be implemented.
     * Members:
     *   static constexpr const char* name = "double";
     *   static constexpr bool is_numeric = true;
     *   static constexpr bool is_pointer = false;
     *   static constexpr int size = sizeof(double);
     *   static constexpr double epsilon = 1e-9;
     *   static std::string describe() — returns "double: floating-point type, size 8 bytes, epsilon 1e-9"
     */
    template <>
    struct TypeInfo<double> {
        // ====== Must be implemented ======
    };

    /**
     * @brief Full specialization for bool
     *
     * Must be implemented.
     * Members:
     *   static constexpr const char* name = "bool";
     *   static constexpr bool is_numeric = false;
     *   static constexpr bool is_pointer = false;
     *   static constexpr int size = sizeof(bool);
     *   static std::string describe() — returns "bool: boolean type, size 1 byte"
     */
    template <>
    struct TypeInfo<bool> {
        // ====== Must be implemented ======
    };

    /**
     * @brief Full specialization for std::string
     *
     * Must be implemented.
     * Members:
     *   static constexpr const char* name = "string";
     *   static constexpr bool is_numeric = false;
     *   static constexpr bool is_pointer = false;
     *   static constexpr int size = sizeof(std::string);
     *   static std::string describe() — returns "string: text type, size <size> bytes"
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
     * Members:
     *   static constexpr const char* name = "pointer";
     *   static constexpr bool is_numeric = false;
     *   static constexpr bool is_pointer = true;
     *   static constexpr int size = sizeof(T*);
     *   Type alias: using pointed_type = T;
     *   static std::string describe() — returns "pointer to <TypeInfo<T>::name>, size <size> bytes"
     *     (uses the TypeInfo of the pointed-to type to get its name)
     */
    template <typename T>
    struct TypeInfo<T*> {
        // ====== Must be implemented ======
    };

} // namespace metaengine

#endif // TYPEINFO_HPP