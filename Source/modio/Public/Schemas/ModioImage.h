// Copyright 2019 modio. All Rights Reserved.
// Released under MIT.

#pragma once

#include "Engine.h"
#include "modio.h"
#include "ModioImage.generated.h"

USTRUCT(BlueprintType)
struct FModioImage
{
  GENERATED_BODY()

  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "mod.io")
  FString Filename;
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "mod.io")
  FString Original;
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "mod.io")
  FString Thumb320x180;
};

extern void InitializeImage(FModioImage &image, const ModioImage &modio_image);