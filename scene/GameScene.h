#pragma once

#include "Audio.h"
#include "DirectXCommon.h"
#include "Input.h"
#include "Model.h"
#include "Sprite.h"
#include "ViewProjection.h"
#include "WorldTransform.h"
#include <memory>
#include  "DebugCamera.h"
#include "FollowCamera.h"
#include "Model.h"
#include "Player.h"
#include "Skydome.h"
#include "Ground.h"
#include "MATHEX.h"
#include "Enemy.h"


/// <summary>
/// ゲームシーン
/// </summary>
class GameScene {

public: // メンバ関数
	/// <summary>
	/// コンストクラタ
	/// </summary>
	GameScene();

	/// <summary>
	/// デストラクタ
	/// </summary>
	~GameScene();

	/// <summary>
	/// 初期化
	/// </summary>
	void Initialize();

	/// <summary>
	/// 毎フレーム処理
	/// </summary>
	void Update();

	/// <summary>
	/// 描画
	/// </summary>
	void Draw();

private: // メンバ変数
	DirectXCommon* dxCommon_ = nullptr;
	Input* input_ = nullptr;
	Audio* audio_ = nullptr;

	/// <summary>
	/// ゲームシーン用
	/// </summary>
	
	Model* model_;
	WorldTransform worldTransform_;
	ViewProjection viewProjection_;


	// デバッグカメラ
	DebugCamera* debugCamera_ = nullptr;
	// デバッグカメラ
	bool isDebugCameraActive_ = false;

	// フォローカメラ
	std::unique_ptr<FollowCamera> followCamera_;

	// 天球
	std::unique_ptr<Skydome> skydome_;

	std::unique_ptr<Model> skydomeModel_;


		// グラウンド
	std::unique_ptr<Ground> ground_;

	std::unique_ptr<Model> groundModel_;


	// Model* model_ = nullptr;
	//std::unique_ptr<Model> model_;

	// Player* player_ = nullptr;
	std::unique_ptr<Player> player_;

	// 敵キャラ
	std::unique_ptr<Enemy> enemy_;


	// 3Dモデル
	std::unique_ptr<Model> modelFighterBody_;
	std::unique_ptr<Model> modelFighterHead_;
	std::unique_ptr<Model> modelFighterL_arm_;
	std::unique_ptr<Model> modelFighterR_arm_;

	//  エネミーモデルデータ
	std::unique_ptr<Model> modelEnemy_;
	// エネミーモデル
	std::unique_ptr<Model> enemyFighterBody_;
	std::unique_ptr<Model> enemyFighterHead_;
	std::unique_ptr<Model> enemyFighterL_arm_;
	std::unique_ptr<Model> enemyFighterR_arm_;

	// 武器モデル
	std::unique_ptr<Model> modelWeapon_;



};
