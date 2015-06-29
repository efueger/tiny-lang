﻿#ifndef _STATEMENT_
#define _STATEMENT_

#include <string>
#include <vector>
#include "../variables/Variables.h"
#include "../token/Token.h"
#include "../tokenizer/Tokenizer.h"

class Statement
{
  public:
    static Statement * GetNext(Tokenizer & program);
    virtual void Execute() const = 0;
    virtual void Read(Tokenizer & program) = 0;
};

#endif
