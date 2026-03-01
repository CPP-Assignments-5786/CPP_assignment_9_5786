/**
 * @file Formatter.hpp
 * @brief Template class with specializations for formatting values
 *
 * This file demonstrates class template specialization by providing
 * different formatting behavior for different types.
 *
 * Students must implement the specializations marked with "Must be implemented".
 *
 * Topics covered:
 * - Primary class template
 * - Full class specializations
 * - Different behavior per type
 * - decltype usage for return types
 */

#ifndef FORMATTER_HPP
#define FORMATTER_HPP

#include <string>
#include <sstream>
#include <iomanip>

namespace metaengine {

    // ============================================================
    //                    PRIMARY TEMPLATE
    // ============================================================

    /**
     * @brief Primary template — formats any type using ostringstream
     *
     * Must be implemented.
     */
    template <typename T>
    struct Formatter {
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
    struct Formatter<int> {
        // ====== Must be implemented ======
    };

    /**
     * @brief Full specialization for double
     *
     * Must be implemented.
     */
    template <>
    struct Formatter<double> {
        // ====== Must be implemented ======
    };

    /**
     * @brief Full specialization for bool
     *
     * Must be implemented.
     */
    template <>
    struct Formatter<bool> {
        // ====== Must be implemented ======
    };

    /**
     * @brief Full specialization for std::string
     *
     * Must be implemented.
     */
    template <>
    struct Formatter<std::string> {
        // ====== Must be implemented ======
    };

} // namespace metaengine

#endif // FORMATTER_HPP