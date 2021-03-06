
//=============================================================================
/**
 *  @file    Compiler_Features_20_DLL.h
 *
 *  $Id: Compiler_Features_20_DLL.h 97177 2013-05-29 10:14:23Z johnnyw $
 *
 *  Test DLL export with default constructor
 */
//=============================================================================


#ifndef ACE_TESTS_COMPILER_FEATURES_20_DLL_H
#define ACE_TESTS_COMPILER_FEATURES_20_DLL_H

#include "test_config.h"

#if defined (ACE_HAS_CPP11)

#include "Compiler_Features_20_DLL_Export.h"

class COMPILER_FEATURES_20_DLL_Export UtcT
{
public:
  ~UtcT (void) = default;
};

#endif

#endif /* ACE_TESTS_COMPILER_FEATURES_20_DLL_H */
