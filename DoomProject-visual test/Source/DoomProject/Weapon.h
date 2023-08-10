//
//UENUM(BlueprintType)
//enum class EFireType : uint8
//{
//	EF_LineTrace	UMETA(DisplayName = "Line Trace"),
//	EF_Projectile	UMETA(DisplayName = "Projectile"),
//};
//
//UCLASS(Abstract)
//class TPS_PROTOTYPE_API AWeapon : public AActor
//{
//	GENERATED_BODY()
//
//
//public:
//	// Sets default values for this actor's properties
//	AWeapon();
//	inline int GetAmmoMaxCount() { return _ammoMaxCount; }
//	inline float GetReloadingDelayTime() { return _reloadingDelayTime; }
//protected:
//	/** 액터의 스켈레톤 매시*/
//	UPROPERTY(EditAnywhere, Category = "Mesh", meta = (AllowPrivateAccess = "true"))
//		class USkeletalMeshComponent* _skeletalMeshComponent;
//
//	/** 탄약의 스태틱 매시*/
//	UPROPERTY(EditAnywhere, Category = "Mesh", meta = (AllowPrivateAccess = "true"))
//		TSubclassOf<class AARBullet> Bullet;
//
//	/** 탄약 최대 개수 */
//	UPROPERTY(EditAnywhere, Category = "Weapon Properties", meta = (AllowPrivateAccess = "true"))
//		int _ammoMaxCount = 30;
//
//	/** 현재 소지한 탄약의 개수*/
//	UPROPERTY(EditAnywhere, Category = "Weapon Properties", meta = (AllowPrivateAccess = "true"))
//		int _ammoRemainCount;
//
//	/** 재장전까지 걸리는 시간 */
//	UPROPERTY(EditAnywhere, Category = "Weapon Properties", meta = (AllowPrivateAccess = "true"))
//		float _reloadingDelayTime = 3.f;
//
//	/** 발사 간의 간격 */
//	UPROPERTY(EditAnywhere, Category = "Weapon Properties", meta = (AllowPrivateAccess = "true"))
//		float _fireInterval = 0.1f;
//
//	/** Line Trace의 Ray 길이 */
//	UPROPERTY(EditAnywhere, Category = "Weapon Properties", meta = (AllowPrivateAccess = "true"))
//		float _traceDistance = 1000.f;
//
//	/** 발사 타입 */
//	UPROPERTY(EditAnywhere, Category = "Weapon Properties", meta = (AllowPrivateAccess = "true"))
//		EFireType _fireType = EFireType::EF_Projectile;
//
//	// Called when the game starts or when spawned
//	virtual void BeginPlay() override;
//
//public:
//	/** 발사를 시작하는 메서드 */
//	virtual void StartFire(const class ACharacter* owner);
//
//	/** 발사를 멈추는 메서드*/
//	virtual void StopFire();
//
//	/** 재장전 메서드*/
//	virtual void Reloading();
//	// Called every frame
//	virtual void Tick(float DeltaTime) override;
//};