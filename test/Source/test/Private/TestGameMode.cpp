#include "TestGameMode.h"
#include "TestPawn.h"
#include "TestPlayerController.h"
//#include "GameFramework/WorldSettings.h"

ATestGameMode::ATestGameMode()
{
    DefaultPawnClass = ATestPawn::StaticClass(); 
    PlayerControllerClass = ATestPlayerController::StaticClass();
}

void ATestGameMode::BeginPlay()
{
    Super::BeginPlay();


}