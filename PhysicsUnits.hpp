/**
 * @file PhysicsUnits.hpp
 * @brief Compile-time physics unit conversions using metaprogramming
 *
 * This file demonstrates constexpr metaprogramming by implementing
 * physics formulas and unit conversions that are computed at compile time.
 *
 * Students must implement the functions and structs marked with "Must be implemented".
 *
 * Topics covered:
 * - constexpr functions
 * - Compile-time computation of physics formulas
 * - Template structs for unit representation
 * - static_assert for compile-time validation
 */

#ifndef PHYSICSUNITS_HPP
#define PHYSICSUNITS_HPP

#include <string>

namespace metaengine {

    // ============================================================
    //              COMPILE-TIME PHYSICS CONSTANTS
    // ============================================================

    // Speed of light in m/s
    inline constexpr double SPEED_OF_LIGHT = 299792458.0;

    // Gravitational acceleration in m/s^2
    inline constexpr double GRAVITY = 9.80665;

    // Pi
    inline constexpr double PI = 3.14159265358979323846;

    // Boltzmann constant in J/K
    inline constexpr double BOLTZMANN = 1.380649e-23;

    // ============================================================
    //              CONSTEXPR CONVERSION FUNCTIONS
    // ============================================================

    /**
     * @brief Convert Celsius to Fahrenheit at compile time
     * Formula: F = C * 9/5 + 32
     * Must be implemented.
     */
    constexpr double celsiusToFahrenheit(double celsius) {
        // ====== Must be implemented ======
        return 0; // placeholder
    }

    /**
     * @brief Convert Fahrenheit to Celsius at compile time
     * Formula: C = (F - 32) * 5/9
     * Must be implemented.
     */
    constexpr double fahrenheitToCelsius(double fahrenheit) {
        // ====== Must be implemented ======
        return 0; // placeholder
    }

    /**
     * @brief Convert kilometers to miles at compile time
     * 1 km = 0.621371 miles
     * Must be implemented.
     */
    constexpr double kmToMiles(double km) {
        // ====== Must be implemented ======
        return 0; // placeholder
    }

    /**
     * @brief Convert miles to kilometers at compile time
     * 1 mile = 1.60934 km
     * Must be implemented.
     */
    constexpr double milesToKm(double miles) {
        // ====== Must be implemented ======
        return 0; // placeholder
    }

    /**
     * @brief Convert degrees to radians at compile time
     * Formula: radians = degrees * PI / 180
     * Must be implemented.
     */
    constexpr double degreesToRadians(double degrees) {
        // ====== Must be implemented ======
        return 0; // placeholder
    }

    /**
     * @brief Convert radians to degrees at compile time
     * Formula: degrees = radians * 180 / PI
     * Must be implemented.
     */
    constexpr double radiansToDegrees(double radians) {
        // ====== Must be implemented ======
        return 0; // placeholder
    }

    // ============================================================
    //            CONSTEXPR PHYSICS FORMULAS
    // ============================================================

    /**
     * @brief Compute kinetic energy at compile time
     * Formula: KE = 0.5 * mass * velocity^2
     * @param mass Mass in kg (must be >= 0)
     * @param velocity Velocity in m/s
     * @return Kinetic energy in Joules
     * Must be implemented.
     */
    constexpr double kineticEnergy(double mass, double velocity) {
        // ====== Must be implemented ======
        return 0; // placeholder
    }

    /**
     * @brief Compute gravitational potential energy at compile time
     * Formula: PE = mass * GRAVITY * height
     * @param mass Mass in kg
     * @param height Height in meters
     * @return Potential energy in Joules
     * Must be implemented.
     */
    constexpr double potentialEnergy(double mass, double height) {
        // ====== Must be implemented ======
        return 0; // placeholder
    }

    /**
     * @brief Compute Einstein's mass-energy equivalence at compile time
     * Formula: E = mass * c^2
     * @param mass Mass in kg
     * @return Energy in Joules
     * Must be implemented.
     */
    constexpr double massEnergy(double mass) {
        // ====== Must be implemented ======
        return 0; // placeholder
    }

    /**
     * @brief Compute free fall distance at compile time
     * Formula: d = 0.5 * g * t^2
     * @param time Time in seconds
     * @return Distance in meters
     * Must be implemented.
     */
    constexpr double freeFallDistance(double time) {
        // ====== Must be implemented ======
        return 0; // placeholder
    }

    /**
     * @brief Compile-time power function (integer exponent)
     * Computes base^exp at compile time using recursion.
     * @param base The base value
     * @param exp The exponent (non-negative integer)
     * @return base raised to the power of exp
     * Must be implemented.
     */
    constexpr double power(double base, int exp) {
        // ====== Must be implemented ======
        return 0; // placeholder
    }

    /**
     * @brief Compile-time absolute value
     * Must be implemented.
     */
    constexpr double absVal(double x) {
        // ====== Must be implemented ======
        return 0; // placeholder
    }

    // ============================================================
    //            COMPILE-TIME DIMENSIONAL ANALYSIS
    // ============================================================

    /**
     * @brief Template struct representing a physical dimension
     *
     * Uses template parameters to encode the power of each base unit:
     *   M = mass (kg), L = length (m), T = time (s)
     *
     * Examples:
     *   Dimension<0,0,0> = dimensionless
     *   Dimension<1,0,0> = mass (kg)
     *   Dimension<0,1,0> = length (m)
     *   Dimension<0,0,1> = time (s)
     *   Dimension<0,1,-1> = velocity (m/s)
     *   Dimension<0,1,-2> = acceleration (m/s^2)
     *   Dimension<1,2,-2> = energy (kg*m^2/s^2 = Joules)
     *
     * Must be implemented.
     * Members:
     *   static constexpr int mass = M;
     *   static constexpr int length = L;
     *   static constexpr int time = T_val;
     *   static std::string toString() — returns "Dim[M=<M>, L=<L>, T=<T>]"
     */
    template <int M, int L, int T_val>
    struct Dimension {
        // ====== Must be implemented ======
    };

    /**
     * @brief Multiply two dimensions (add exponents)
     *
     * When multiplying physical quantities, their dimension exponents add.
     * Example: velocity * time = length  =>  (0,1,-1) + (0,0,1) = (0,1,0)
     *
     * Must be implemented.
     * Members:
     *   using type = Dimension<M1+M2, L1+L2, T1+T2>;
     */
    template <typename D1, typename D2>
    struct DimMultiply;

    template <int M1, int L1, int T1, int M2, int L2, int T2>
    struct DimMultiply<Dimension<M1, L1, T1>, Dimension<M2, L2, T2>> {
        // ====== Must be implemented ======
    };

    /**
     * @brief Divide two dimensions (subtract exponents)
     *
     * When dividing physical quantities, their dimension exponents subtract.
     * Example: length / time = velocity  =>  (0,1,0) - (0,0,1) = (0,1,-1)
     *
     * Must be implemented.
     */
    template <typename D1, typename D2>
    struct DimDivide;

    template <int M1, int L1, int T1, int M2, int L2, int T2>
    struct DimDivide<Dimension<M1, L1, T1>, Dimension<M2, L2, T2>> {
        // ====== Must be implemented ======
    };

    // Convenient type aliases for common dimensions
    using Dimensionless  = Dimension<0, 0, 0>;
    using Mass           = Dimension<1, 0, 0>;
    using Length         = Dimension<0, 1, 0>;
    using Time           = Dimension<0, 0, 1>;
    using Velocity       = Dimension<0, 1, -1>;
    using Acceleration   = Dimension<0, 1, -2>;
    using Force          = Dimension<1, 1, -2>;
    using Energy         = Dimension<1, 2, -2>;

} // namespace metaengine

#endif // PHYSICSUNITS_HPP