// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//
#pragma once

#define NOMINMAX
#include <Windows.h>
#include <wrl/client.h>

#include <D3d12SDKLayers.h>
#include <d3d12.h>
#pragma comment(lib, "d3d12.lib")
#include "d3dx12.h"
#include <string>

#include <dxgi1_4.h>
#pragma comment(lib, "dxgi.lib")

#include <DirectXMath.h>
#include <DirectXColors.h>
#include <DirectXPackedVector.h>
#include <DirectXCollision.h>

#include <D3Dcompiler.h>
#pragma comment(lib, "D3Dcompiler.lib")


#include <vector>
#include <iostream>
#include <memory>
#include <array>
#include <queue>
using namespace std;
#include "D3DUtils.h"

using namespace DirectX;


using namespace Microsoft::WRL;