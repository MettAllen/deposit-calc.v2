#include <ctest.h>
#include <../src/deposit.h>

////Test check correct////
CTEST(input_check, test_input)
{
    int result = Chek(1234827, 231);
    
    int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(calc_test, calc)
{
    double result = Dohod(123400,140);
    
    const double expected = 133272;
    ASSERT_DBL_NEAR(expected, result);
}

////Test less 100k rub////

CTEST(calc_31_day_more_100000_rub, calc)
{
    double result = Dohod(150000, 31);
    const double exp = 154500;

    ASSERT_DBL_NEAR(exp, result);
}

CTEST(calc_120_day_more_100000_rub, calc)
{
    double result = Dohod(150000, 31);
    const double exp = 154500;

    ASSERT_DBL_NEAR(exp, result);
}

CTEST(calc_121_day_more_100000_rub, calc)
{
    double result = Dohod(150000, 121);
    const double exp = 162000;

    ASSERT_DBL_NEAR(exp, result);
}

CTEST(calc_240_day_more_100000_rub, calc)
{
    double result = Dohod(150000, 121);
    const double exp = 162000;

    ASSERT_DBL_NEAR(exp, result);
}

CTEST(calc_241_day_more_100000_rub, calc)
{
    double result = Dohod(150000, 241);
    const double exp = 172500;

    ASSERT_DBL_NEAR(exp, result);
}

CTEST(calc_365_day_more_100000_rub, calc)
{
    double result = Dohod(150000, 241);
    const double exp = 172500;

    ASSERT_DBL_NEAR(exp, result);
}

///Test less 100k rub////

CTEST(calc_31_day_less_100000_rub, calc)
{
    double result = Dohod(50000, 31);
    const double exp = 51000;

    ASSERT_DBL_NEAR(exp, result);
}

CTEST(calc_120_day_less_100000_rub, calc)
{
    double result = Dohod(50000, 31);
    const double exp = 51000;

    ASSERT_DBL_NEAR(exp, result);
}

CTEST(calc_121_day_less_100000_rub, calc)
{
    double result = Dohod(50000, 121);
    const double exp = 53000;

    ASSERT_DBL_NEAR(exp, result);
}

CTEST(calc_240_day_less_100000_rub, calc)
{
    double result = Dohod(50000, 121);
    const double exp = 53000;

    ASSERT_DBL_NEAR(exp, result);
}

CTEST(calc_241_day_less_100000_rub, calc)
{
    double result = Dohod(50000, 241);
    const double exp = 56000;

    ASSERT_DBL_NEAR(exp, result);
}

CTEST(calc_365_day_less_100000_rub, calc)
{
    double result = Dohod(50000, 241);
    const double exp = 56000;

    ASSERT_DBL_NEAR(exp, result);
}
