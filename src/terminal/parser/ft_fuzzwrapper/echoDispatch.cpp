// Copyright (c) Microsoft Corporation.
// Licensed under the MIT license.

#include "precomp.h"

#include "echoDispatch.hpp"

using namespace Microsoft::Console::VirtualTerminal;

void EchoDispatch::Print(const wchar_t wchPrintable)
{
    wprintf(L"Print: %c (0x%x)\r\n", wchPrintable, wchPrintable);
}

void EchoDispatch::PrintString(const std::wstring_view string)
{
    wprintf(L"PrintString: \"%s\" (%zd chars)\r\n", string.data(), string.size());
}

void EchoDispatch::Execute(const wchar_t wchControl)
{
    wprintf(L"Execute: 0x%x\r\n", wchControl);
}
