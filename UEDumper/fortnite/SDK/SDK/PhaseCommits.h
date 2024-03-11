
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject

/// Enum /Script/PhaseCommits.ECoordinatorFlowState
/// Size: 0x08
enum class ECoordinatorFlowState : uint8_t
{
	ECoordinatorFlowState__NONE                                                      = 0,
	ECoordinatorFlowState__Initializing                                              = 1,
	ECoordinatorFlowState__WaitingForRequest                                         = 2,
	ECoordinatorFlowState__WaitingForConsensus_BeginChange                           = 3,
	ECoordinatorFlowState__WaitingForConsensus_Precommit                             = 4,
	ECoordinatorFlowState__Consensus_Success                                         = 5,
	ECoordinatorFlowState__Consensus_Failed                                          = 6,
	ECoordinatorFlowState__ECoordinatorFlowState_MAX                                 = 7
};

/// Enum /Script/PhaseCommits.EParticipantFlowState
/// Size: 0x06
enum class EParticipantFlowState : uint8_t
{
	EParticipantFlowState__NONE                                                      = 0,
	EParticipantFlowState__Initializing                                              = 1,
	EParticipantFlowState__WaitingFor_BroadcastBeginChange                           = 2,
	EParticipantFlowState__WaitingFor_Precommit                                      = 3,
	EParticipantFlowState__WaitingFor_Commit                                         = 4,
	EParticipantFlowState__EParticipantFlowState_MAX                                 = 5
};

/// Enum /Script/PhaseCommits.EPhaseCommit
/// Size: 0x04
enum class EPhaseCommit : uint8_t
{
	EPhaseCommit__One                                                                = 0,
	EPhaseCommit__Two                                                                = 1,
	EPhaseCommit__Three                                                              = 2,
	EPhaseCommit__EPhaseCommit_MAX                                                   = 3
};

/// Enum /Script/PhaseCommits.ECoordinatorBroadcasts
/// Size: 0x08
enum class ECoordinatorBroadcasts : uint8_t
{
	ECoordinatorBroadcasts__ReadyForRequests                                         = 0,
	ECoordinatorBroadcasts__BeginStateChange_TwoPhase                                = 1,
	ECoordinatorBroadcasts__BeginStateChange_ThreePhase                              = 2,
	ECoordinatorBroadcasts__PreCommit                                                = 3,
	ECoordinatorBroadcasts__Success                                                  = 4,
	ECoordinatorBroadcasts__Aborted                                                  = 5,
	ECoordinatorBroadcasts__NUM                                                      = 6,
	ECoordinatorBroadcasts__ECoordinatorBroadcasts_MAX                               = 7
};

/// Enum /Script/PhaseCommits.ECoordinatorBroadcasts_Repl
/// Size: 0x08
enum class ECoordinatorBroadcasts_Repl : uint8_t
{
	ECoordinatorBroadcasts_Repl__R                                                   = 0,
	ECoordinatorBroadcasts_Repl__A                                                   = 1,
	ECoordinatorBroadcasts_Repl__B                                                   = 2,
	ECoordinatorBroadcasts_Repl__C                                                   = 3,
	ECoordinatorBroadcasts_Repl__S                                                   = 4,
	ECoordinatorBroadcasts_Repl__F                                                   = 5,
	ECoordinatorBroadcasts_Repl__NUM                                                 = 6,
	ECoordinatorBroadcasts_Repl__ECoordinatorBroadcasts_MAX                          = 7
};

/// Enum /Script/PhaseCommits.EParticipantResponses
/// Size: 0x09
enum class EParticipantResponses : uint8_t
{
	EParticipantResponses__NONE                                                      = 0,
	EParticipantResponses__AcceptedBegin                                             = 1,
	EParticipantResponses__RejectedBegin                                             = 2,
	EParticipantResponses__AcceptedPreCommit                                         = 3,
	EParticipantResponses__RejectedPreCommit                                         = 4,
	EParticipantResponses__ReceivedSuccess                                           = 5,
	EParticipantResponses__ReceivedAbort                                             = 6,
	EParticipantResponses__NUM                                                       = 7,
	EParticipantResponses__EParticipantResponses_MAX                                 = 8
};

/// Enum /Script/PhaseCommits.EParticipantResponses_Repl
/// Size: 0x09
enum class EParticipantResponses_Repl : uint8_t
{
	EParticipantResponses_Repl__N                                                    = 0,
	EParticipantResponses_Repl__A                                                    = 1,
	EParticipantResponses_Repl__B                                                    = 2,
	EParticipantResponses_Repl__C                                                    = 3,
	EParticipantResponses_Repl__D                                                    = 4,
	EParticipantResponses_Repl__S                                                    = 5,
	EParticipantResponses_Repl__F                                                    = 6,
	EParticipantResponses_Repl__NUM                                                  = 7,
	EParticipantResponses_Repl__EParticipantResponses_MAX                            = 8
};

/// Class /Script/PhaseCommits.PhaseCommitFlow_Coordinator
/// Size: 0x0000 (0x000028 - 0x000028)
class UPhaseCommitFlow_Coordinator : public UInterface
{ 
public:
};

/// Class /Script/PhaseCommits.PhaseCommitFlow_Participant
/// Size: 0x0000 (0x000028 - 0x000028)
class UPhaseCommitFlow_Participant : public UInterface
{ 
public:
};

