/**
 * @file lm_test.h
 * @author Sean Massung
 *
 * All files in META are dual-licensed under the MIT and NCSA licenses. For more
 * details, consult the file LICENSE.mit and LICENSE.ncsa in the root of the
 * project.
 */

#ifndef META_LM_TEST_H_
#define META_LM_TEST_H_

#include <fstream>

#include "test/unit_test.h"

namespace meta
{
namespace testing
{
/**
 * Runs all the language model tests, comparing to KenLM as the reference
 * implementation.
 * @see https://kheafield.com/code/kenlm/
 * @return the number of tests failed
 */
int lm_tests();
}
}

#endif