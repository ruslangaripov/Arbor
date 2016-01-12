#pragma once
#include "sdkver.h"
#include <rpc.h>
#include <rpcndr.h>
#include <Unknwn.h>
#include <Windows.h>

/**
 * `IArborVisual` interface.
 * `IArborVisual` interface represents a window object where graph representation is rendered.
 *
 * The `IArborVisual` interface has these methods.
 * `createWindow` creates window USER object.
 * `getHWND` returns handle to the window.
 */
MIDL_INTERFACE("5923B678-E139-4334-A138-E0EA2298AA08")
IArborVisual: public IUnknown
{
public:
    virtual HRESULT STDMETHODCALLTYPE createWindow(
        _In_opt_ HWND parent,
        _In_ DWORD style,
        _In_ DWORD exStyle,
        _In_ HANDLE hwndReadyEvent,
        _In_ UINT dpiChangedMessage) = 0;
    virtual HRESULT STDMETHODCALLTYPE getHWND(_Out_ HWND* handle) = 0;
};