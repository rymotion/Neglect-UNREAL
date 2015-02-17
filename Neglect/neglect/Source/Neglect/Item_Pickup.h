

#pragma once

#include "GameFramework/Actor.h"
#include "Item_Pickup.generated.h"

/**
 * 
 */
UCLASS()
class NEGLECT_API AItem_Pickup : public AActor {
	GENERATED_UCLASS_BODY()

	// Is Item able to be picked up?
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Pickup)
    bool bIsActive;
    
    UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = Pickup)
    TSubobjectPtr<USphereComponent> BaseCollisionComponent;
    
    UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = Pickup)
    TSubobjectPtr<UStaticMeshComponent> PickupMesh;
    
    UFUNCTION(BlueprintNativeEvent)
    void OnPickedUp();
	
};
