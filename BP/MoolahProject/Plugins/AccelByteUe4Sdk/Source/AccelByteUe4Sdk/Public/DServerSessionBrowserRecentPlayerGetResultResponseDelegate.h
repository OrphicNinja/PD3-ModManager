#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsSessionBrowserRecentPlayerGetResult.h"
#include "DServerSessionBrowserRecentPlayerGetResultResponseDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FDServerSessionBrowserRecentPlayerGetResultResponse, FAccelByteModelsSessionBrowserRecentPlayerGetResult, Response);
