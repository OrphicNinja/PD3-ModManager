#pragma once
#include "CoreMinimal.h"
#include "RegisterResponse.h"
#include "DUserRegisterHandlerDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FDUserRegisterHandler, const FRegisterResponse&, Result);

