#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ItemInterface.h"
#include "BaseItem.generated.h"

UCLASS()
class TEST_API ABaseItem : public AActor, public IItemInterface
{
	GENERATED_BODY()
	
public:	
	ABaseItem();

protected:
	//virtual void OnItemOverlap(AActor* OverlapActor) override;
	//virtual void OnItemRndOverlap(AActor* OverlapActor) override;
	//virtual void ActivateItem(AActor* Activator) override;
	//virtual FName GetItemType() const override;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	//FName ItemType;
};
