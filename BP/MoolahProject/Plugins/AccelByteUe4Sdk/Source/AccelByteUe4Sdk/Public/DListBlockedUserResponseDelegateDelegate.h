#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsListBlockedUserResponse.h"
#include "DListBlockedUserResponseDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FDListBlockedUserResponseDelegate, FAccelByteModelsListBlockedUserResponse, Response);

