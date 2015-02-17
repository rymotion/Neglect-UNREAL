

#include "Neglect.h"
#include "Item_Pickup.h"


AItem_Pickup::AItem_Pickup(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP) {
        //The pickup is valid when it is created
        bIsActive = true;
        
        BaseCollisionComponent = PCIP.CreateDefaultSubobject<USphereComponent>(this, TEXT("BaseSphereComponent"));
        
        RootComponent = BaseCollisionComponent;
        
        PickupMesh = PCIP.CreateDefaultSubobject<UStaticMeshComponent>(this, TEXT("PickupMesh"));
        
        PickupMesh->SetSimulatePhysics(true);
        
        PickupMesh->AttachTo(RootComponent);
}
void APickup::OnPickedUp_Implementation() {
    //Thereis no default behavior when it is picked up.
}


