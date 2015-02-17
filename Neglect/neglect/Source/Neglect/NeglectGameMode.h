

#pragma once

#include "GameFramework/GameMode.h"
#include "NeglectGameMode.generated.h"

/**
 * 
 */
UCLASS()
class NEGLECT_API ANeglectGameMode : public AGameMode {
	GENERATED_UCLASS_BODY()

    virtual void Tick(float DeltaSeconds) OVERRIDE;
    
    UPROPERTY(EditDeafaultsONly, BlueprintRe)
	
};
