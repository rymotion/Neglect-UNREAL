

#include "Neglect.h"
#include "NeglectGameMode.h"
#include "NeglectPlayerController.h"
#include "Neglect_player.h"

ANeglectGameMode::ANeglectGameMode(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP){
	PlayerControllerClass = ANeglectPlayerController::StaticClass();
        
        
        
}

void ANeglectGameMode::Tick(float DeltaSeconds)
{
    
}

