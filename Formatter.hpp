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
     * Methods:
     *   static std::string format(const T& value)
     *     — Uses ostringstream to convert value to string
     *     — Returns the string representation
     *
     *   static std::string formatWithLabel(const std::string& label, const T& value)
     *     — Returns "<label>: <formatted_value>"
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
     * Methods:
     *   static std::string format(int value)
     *     — Returns the integer as a string
     *
     *   static std::string formatHex(int value)
     *     — Returns "0x" followed by uppercase hex (e.g., "0xFF")
     *     — Uses std::hex, std::uppercase
     *
     *   static std::string formatBinary(int value)
     *     — Returns the binary representation as a string (e.g., "1010" for 10)
     *     — For value 0, returns "0"
     *     — For negative values, prefix with "-" and convert absolute value
     *
     *   static std::string formatWithLabel(const std::string& label, int value)
     *     — Returns "<label>: <value> (hex: <hex>, bin: <binary>)"
     */
    template <>
    struct Formatter<int> {
        // ====== Must be implemented ======
    };

    /**
     * @brief Full specialization for double
     *
     * Must be implemented.
     * Methods:
     *   static std::string format(double value, int precision = 2)
     *     — Returns the double formatted with fixed precision
     *     — Uses std::fixed and std::setprecision
     *
     *   static std::string formatScientific(double value, int precision = 3)
     *     — Returns in scientific notation (e.g., "1.230e+02")
     *     — Uses std::scientific and std::setprecision
     *
     *   static std::string formatWithLabel(const std::string& label, double value)
     *     — Returns "<label>: <formatted_value>" (using default precision 2)
     */
    template <>
    struct Formatter<double> {
        // ====== Must be implemented ======
    };

    /**
     * @brief Full specialization for bool
     *
     * Must be implemented.
     * Methods:
     *   static std::string format(bool value)
     *     — Returns "true" or "false"
     *
     *   static std::string formatYesNo(bool value)
     *     — Returns "Yes" or "No"
     *
     *   static std::string formatOnOff(bool value)
     *     — Returns "ON" or "OFF"
     *
     *   static std::string formatWithLabel(const std::string& label, bool value)
     *     — Returns "<label>: <true/false>"
     */
    template <>
    struct Formatter<bool> {
        // ====== Must be implemented ======
    };

    /**
     * @brief Full specialization for std::string
     *
     * Must be implemented.
     * Methods:
     *   static std::string format(const std::string& value)
     *     — Returns the string wrapped in quotes: "\"<value>\""
     *
     *   static std::string formatUpper(const std::string& value)
     *     — Returns the string converted to uppercase
     *
     *   static std::string formatLower(const std::string& value)
     *     — Returns the string converted to lowercase
     *
     *   static std::string formatWithLabel(const std::string& label, const std::string& value)
     *     — Returns "<label>: \"<value>\" (length: <length>)"
     */
    template <>
    struct Formatter<std::string> {
        // ====== Must be implemented ======
    };

} // namespace metaengine

#endif // FORMATTER_HPP