@ Cloud Tops CUTSCENE_ORCHESTRATOR great whirlwind revealed
SCRIPT_START script_CutsceneOrchestratorGreatWhirlwindRevealed
	BeginBlock
	Call SetPriorityHighest
	SetEntitySpeed 0x0700
	_0807F0B4 0x0007
	CameraTargetEntity
	Call sub_0807FBC4
	EndBlock
	SetSyncFlag 0x00000008
	WaitForSyncFlagAndClear 0x00000010
	SetSyncFlag 0x00000002
	WaitForSyncFlagAndClear 0x00000004
	SetSyncFlag 0x0000000a
	WaitForSyncFlagAndClear 0x00000004
	_0807EEB4
	_0807F0B4 0x0004
	CameraTargetPlayer
	Call sub_0807FBCC
	EnablePlayerControl
	Call EnablePauseMenu
	DoPostScriptAction 0x0006
SCRIPT_END
	.2byte 0x0000