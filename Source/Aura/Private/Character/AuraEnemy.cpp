// Copyright Dingcheng


#include "Character/AuraEnemy.h"
#include "DrawDebugHelpers.h"
#include "Aura/Aura.h"

AAuraEnemy::AAuraEnemy()
{
	GetMesh()->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);
}

void AAuraEnemy::HighlightActor()
{
	UE_LOG(LogTemp, Warning, TEXT("HighlightActor"));
	//FVector SphereCenter = GetActorLocation();
	//DrawDebugSphere(GetWorld(), SphereCenter, 50, 32, FColor::Red, false, 1, 0, 0);
	GetMesh()->SetRenderCustomDepth(true);
	GetMesh()->SetCustomDepthStencilValue(CUSTOM_DEPTH_RED);
	Weapon->SetRenderCustomDepth(true);
	Weapon->SetCustomDepthStencilValue(CUSTOM_DEPTH_RED);

}

void AAuraEnemy::UnHighlightActor()
{
	UE_LOG(LogTemp, Warning, TEXT("UnHighlightActor"));
	//DrawDebugSphere(GetWorld(), GetActorLocation(), 50, 32, FColor::Transparent, false, -1, 0, 0);
	GetMesh()->SetRenderCustomDepth(false);
	Weapon->SetRenderCustomDepth(false);
}
