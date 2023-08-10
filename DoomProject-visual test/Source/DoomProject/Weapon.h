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
//	/** ������ ���̷��� �Ž�*/
//	UPROPERTY(EditAnywhere, Category = "Mesh", meta = (AllowPrivateAccess = "true"))
//		class USkeletalMeshComponent* _skeletalMeshComponent;
//
//	/** ź���� ����ƽ �Ž�*/
//	UPROPERTY(EditAnywhere, Category = "Mesh", meta = (AllowPrivateAccess = "true"))
//		TSubclassOf<class AARBullet> Bullet;
//
//	/** ź�� �ִ� ���� */
//	UPROPERTY(EditAnywhere, Category = "Weapon Properties", meta = (AllowPrivateAccess = "true"))
//		int _ammoMaxCount = 30;
//
//	/** ���� ������ ź���� ����*/
//	UPROPERTY(EditAnywhere, Category = "Weapon Properties", meta = (AllowPrivateAccess = "true"))
//		int _ammoRemainCount;
//
//	/** ���������� �ɸ��� �ð� */
//	UPROPERTY(EditAnywhere, Category = "Weapon Properties", meta = (AllowPrivateAccess = "true"))
//		float _reloadingDelayTime = 3.f;
//
//	/** �߻� ���� ���� */
//	UPROPERTY(EditAnywhere, Category = "Weapon Properties", meta = (AllowPrivateAccess = "true"))
//		float _fireInterval = 0.1f;
//
//	/** Line Trace�� Ray ���� */
//	UPROPERTY(EditAnywhere, Category = "Weapon Properties", meta = (AllowPrivateAccess = "true"))
//		float _traceDistance = 1000.f;
//
//	/** �߻� Ÿ�� */
//	UPROPERTY(EditAnywhere, Category = "Weapon Properties", meta = (AllowPrivateAccess = "true"))
//		EFireType _fireType = EFireType::EF_Projectile;
//
//	// Called when the game starts or when spawned
//	virtual void BeginPlay() override;
//
//public:
//	/** �߻縦 �����ϴ� �޼��� */
//	virtual void StartFire(const class ACharacter* owner);
//
//	/** �߻縦 ���ߴ� �޼���*/
//	virtual void StopFire();
//
//	/** ������ �޼���*/
//	virtual void Reloading();
//	// Called every frame
//	virtual void Tick(float DeltaTime) override;
//};