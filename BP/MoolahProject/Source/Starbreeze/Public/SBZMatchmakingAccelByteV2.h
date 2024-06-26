#pragma once
#include "CoreMinimal.h"
#include "SBZMatchmaking.h"
#include "SBZQueuedJoinLobby.h"
#include "SBZMatchmakingAccelByteV2.generated.h"

UCLASS(Blueprintable)
class USBZMatchmakingAccelByteV2 : public USBZMatchmaking {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZQueuedJoinLobby QueuedJoinLobby;
    
public:
    USBZMatchmakingAccelByteV2();

};

