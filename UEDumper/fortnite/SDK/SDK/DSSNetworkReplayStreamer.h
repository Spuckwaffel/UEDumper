
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once

/// Enum /Script/DSSNetworkReplayStreamer.EDSSReplayResult
/// Size: 0x08
enum class EDSSReplayResult : uint8_t
{
	EDSSReplayResult__Success                                                        = 0,
	EDSSReplayResult__FailedJsonParse                                                = 1,
	EDSSReplayResult__DataUnavailable                                                = 2,
	EDSSReplayResult__InvalidHttpResponse                                            = 3,
	EDSSReplayResult__CompressionFailed                                              = 4,
	EDSSReplayResult__InvalidPayload                                                 = 5,
	EDSSReplayResult__Unknown                                                        = 6,
	EDSSReplayResult__EDSSReplayResult_MAX                                           = 7
};

