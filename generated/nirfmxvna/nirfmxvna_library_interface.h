//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Library wrapper for implementing interactions with NI-rfmxvna
//---------------------------------------------------------------------
#ifndef NIRFMXVNA_GRPC_LIBRARY_WRAPPER_H
#define NIRFMXVNA_GRPC_LIBRARY_WRAPPER_H

#include <grpcpp/grpcpp.h>
#include <niRFmxVNA.h>

namespace nirfmxvna_grpc {

class NiRFmxVNALibraryInterface {
 public:
  virtual ~NiRFmxVNALibraryInterface() {}

  virtual int32 AbortMeasurements(niRFmxInstrHandle instrumentHandle, char selectorString[]) = 0;
  virtual int32 AutoDetectvCalOrientation(niRFmxInstrHandle instrumentHandle, char selectorString[]) = 0;
  virtual int32 BuildCalibrationElementString(char selectorString[], char calibrationElementID[], int32 selectorStringOutLength, char selectorStringOut[]) = 0;
  virtual int32 BuildCalkitString(char selectorString[], char calkitID[], int32 selectorStringOutLength, char selectorStringOut[]) = 0;
  virtual int32 BuildCalstepString(char selectorString[], int32 calstepNumber, int32 selectorStringOutLength, char selectorStringOut[]) = 0;
  virtual int32 BuildConnectorString(char selectorString[], char connectorID[], int32 selectorStringOutLength, char selectorStringOut[]) = 0;
  virtual int32 BuildMarkerString(char selectorString[], int32 markerNumber, int32 selectorStringOutLength, char selectorStringOut[]) = 0;
  virtual int32 BuildPortString(char selectorString[], char portString[], int32 selectorStringOutLength, char selectorStringOut[]) = 0;
  virtual int32 BuildPulseGeneratorString(char selectorString[], int32 pulseGeneratorNumber, int32 selectorStringOutLength, char selectorStringOut[]) = 0;
  virtual int32 BuildSParameterString(char selectorString[], int32 sParameterNumber, int32 selectorStringOutLength, char selectorStringOut[]) = 0;
  virtual int32 BuildSegmentString(char selectorString[], int32 segmentNumber, int32 selectorStringOutLength, char selectorStringOut[]) = 0;
  virtual int32 BuildSignalString(char signalName[], char resultName[], int32 selectorStringLength, char selectorString[]) = 0;
  virtual int32 BuildWaveString(char selectorString[], int32 waveNumber, int32 selectorStringOutLength, char selectorStringOut[]) = 0;
  virtual int32 CalibrationAbort(niRFmxInstrHandle instrumentHandle, char selectorString[]) = 0;
  virtual int32 CalibrationAcquire(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout) = 0;
  virtual int32 CalibrationInitiate(niRFmxInstrHandle instrumentHandle, char selectorString[]) = 0;
  virtual int32 CalibrationSave(niRFmxInstrHandle instrumentHandle, char selectorString[], char calsetName[]) = 0;
  virtual int32 CalkitManagerCalkitAddCalibrationElement(niRFmxInstrHandle instrumentHandle, char selectorString[], char calibrationElementID[]) = 0;
  virtual int32 CalkitManagerCalkitAddConnector(niRFmxInstrHandle instrumentHandle, char selectorString[], char connectorID[]) = 0;
  virtual int32 CalkitManagerCalkitCalibrationElementDelayModelGetDelay(niRFmxInstrHandle instrumentHandle, char selectorString[], float64* delay) = 0;
  virtual int32 CalkitManagerCalkitCalibrationElementDelayModelSetDelay(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 delay) = 0;
  virtual int32 CalkitManagerCalkitCalibrationElementGetDescription(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 arraySize, char description[]) = 0;
  virtual int32 CalkitManagerCalkitCalibrationElementGetMaximumFrequency(niRFmxInstrHandle instrumentHandle, char selectorString[], float64* maximumFrequency) = 0;
  virtual int32 CalkitManagerCalkitCalibrationElementGetMinimumFrequency(niRFmxInstrHandle instrumentHandle, char selectorString[], float64* minimumFrequency) = 0;
  virtual int32 CalkitManagerCalkitCalibrationElementGetPortConnectors(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 arraySize, char connectorIDs[]) = 0;
  virtual int32 CalkitManagerCalkitCalibrationElementGetSParameterDefinition(niRFmxInstrHandle instrumentHandle, char selectorString[], int32* sParameterDefinition) = 0;
  virtual int32 CalkitManagerCalkitCalibrationElementGetTypes(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 calibrationElementTypes[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 CalkitManagerCalkitCalibrationElementReflectModelGetC0(niRFmxInstrHandle instrumentHandle, char selectorString[], float64* c0) = 0;
  virtual int32 CalkitManagerCalkitCalibrationElementReflectModelGetC1(niRFmxInstrHandle instrumentHandle, char selectorString[], float64* c1) = 0;
  virtual int32 CalkitManagerCalkitCalibrationElementReflectModelGetC2(niRFmxInstrHandle instrumentHandle, char selectorString[], float64* c2) = 0;
  virtual int32 CalkitManagerCalkitCalibrationElementReflectModelGetC3(niRFmxInstrHandle instrumentHandle, char selectorString[], float64* c3) = 0;
  virtual int32 CalkitManagerCalkitCalibrationElementReflectModelGetModelType(niRFmxInstrHandle instrumentHandle, char selectorString[], int32* modelType) = 0;
  virtual int32 CalkitManagerCalkitCalibrationElementReflectModelGetOffsetDelay(niRFmxInstrHandle instrumentHandle, char selectorString[], float64* offsetDelay) = 0;
  virtual int32 CalkitManagerCalkitCalibrationElementReflectModelGetOffsetLoss(niRFmxInstrHandle instrumentHandle, char selectorString[], float64* offsetLoss) = 0;
  virtual int32 CalkitManagerCalkitCalibrationElementReflectModelGetOffsetZ0(niRFmxInstrHandle instrumentHandle, char selectorString[], float64* offsetZ0) = 0;
  virtual int32 CalkitManagerCalkitCalibrationElementReflectModelGetReferenceImpedance(niRFmxInstrHandle instrumentHandle, char selectorString[], float64* referenceImpedance) = 0;
  virtual int32 CalkitManagerCalkitCalibrationElementReflectModelGetSParamAvailability(niRFmxInstrHandle instrumentHandle, char selectorString[], int32* sParameterAvailability) = 0;
  virtual int32 CalkitManagerCalkitCalibrationElementReflectModelSetC0(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 c0) = 0;
  virtual int32 CalkitManagerCalkitCalibrationElementReflectModelSetC1(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 c1) = 0;
  virtual int32 CalkitManagerCalkitCalibrationElementReflectModelSetC2(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 c2) = 0;
  virtual int32 CalkitManagerCalkitCalibrationElementReflectModelSetC3(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 c3) = 0;
  virtual int32 CalkitManagerCalkitCalibrationElementReflectModelSetModelType(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 modelType) = 0;
  virtual int32 CalkitManagerCalkitCalibrationElementReflectModelSetOffsetDelay(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 offsetDelay) = 0;
  virtual int32 CalkitManagerCalkitCalibrationElementReflectModelSetOffsetLoss(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 offsetLoss) = 0;
  virtual int32 CalkitManagerCalkitCalibrationElementReflectModelSetOffsetZ0(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 offsetZ0) = 0;
  virtual int32 CalkitManagerCalkitCalibrationElementReflectModelSetReferenceImpedance(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 referenceImpedance) = 0;
  virtual int32 CalkitManagerCalkitCalibrationElementReflectModelSetSParamAvailability(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 sParameterAvailability) = 0;
  virtual int32 CalkitManagerCalkitCalibrationElementSParameterGetFrequency(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 frequency[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 CalkitManagerCalkitCalibrationElementSParameterGetS11(niRFmxInstrHandle instrumentHandle, char selectorString[], NIComplexDouble s11[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 CalkitManagerCalkitCalibrationElementSParameterGetS11Split(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 s11I[], float64 s11Q[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 CalkitManagerCalkitCalibrationElementSParameterGetS12(niRFmxInstrHandle instrumentHandle, char selectorString[], NIComplexDouble s12[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 CalkitManagerCalkitCalibrationElementSParameterGetS12Split(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 s12I[], float64 s12Q[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 CalkitManagerCalkitCalibrationElementSParameterGetS21(niRFmxInstrHandle instrumentHandle, char selectorString[], NIComplexDouble s21[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 CalkitManagerCalkitCalibrationElementSParameterGetS21Split(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 s21I[], float64 s21Q[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 CalkitManagerCalkitCalibrationElementSParameterGetS22(niRFmxInstrHandle instrumentHandle, char selectorString[], NIComplexDouble s22[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 CalkitManagerCalkitCalibrationElementSParameterGetS22Split(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 s22I[], float64 s22Q[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 CalkitManagerCalkitCalibrationElementSParameterGetSParamAvailability(niRFmxInstrHandle instrumentHandle, char selectorString[], int32* sParameterAvailability) = 0;
  virtual int32 CalkitManagerCalkitCalibrationElementSParameterSetFrequency(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 frequency[], int32 arraySize) = 0;
  virtual int32 CalkitManagerCalkitCalibrationElementSParameterSetFromFile(niRFmxInstrHandle instrumentHandle, char selectorString[], char fileName[]) = 0;
  virtual int32 CalkitManagerCalkitCalibrationElementSParameterSetS11(niRFmxInstrHandle instrumentHandle, char selectorString[], NIComplexDouble s11[], int32 arraySize) = 0;
  virtual int32 CalkitManagerCalkitCalibrationElementSParameterSetS12(niRFmxInstrHandle instrumentHandle, char selectorString[], NIComplexDouble s12[], int32 arraySize) = 0;
  virtual int32 CalkitManagerCalkitCalibrationElementSParameterSetS21(niRFmxInstrHandle instrumentHandle, char selectorString[], NIComplexDouble s21[], int32 arraySize) = 0;
  virtual int32 CalkitManagerCalkitCalibrationElementSParameterSetS22(niRFmxInstrHandle instrumentHandle, char selectorString[], NIComplexDouble s22[], int32 arraySize) = 0;
  virtual int32 CalkitManagerCalkitCalibrationElementSParameterSetSParamAvailability(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 sParameterAvailability) = 0;
  virtual int32 CalkitManagerCalkitCalibrationElementSetDescription(niRFmxInstrHandle instrumentHandle, char selectorString[], char description[]) = 0;
  virtual int32 CalkitManagerCalkitCalibrationElementSetMaximumFrequency(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 maximumFrequency) = 0;
  virtual int32 CalkitManagerCalkitCalibrationElementSetMinimumFrequency(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 minimumFrequency) = 0;
  virtual int32 CalkitManagerCalkitCalibrationElementSetPortConnectors(niRFmxInstrHandle instrumentHandle, char selectorString[], char connectorIDs[], int32 arraySize) = 0;
  virtual int32 CalkitManagerCalkitCalibrationElementSetSParameterDefinition(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 sParameterDefinition) = 0;
  virtual int32 CalkitManagerCalkitCalibrationElementSetTypes(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 calibrationElementTypes[], int32 arraySize) = 0;
  virtual int32 CalkitManagerCalkitConnectorGetDescription(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 arraySize, char description[]) = 0;
  virtual int32 CalkitManagerCalkitConnectorGetGender(niRFmxInstrHandle instrumentHandle, char selectorString[], int32* connectorGender) = 0;
  virtual int32 CalkitManagerCalkitConnectorGetImpedance(niRFmxInstrHandle instrumentHandle, char selectorString[], float64* impedance) = 0;
  virtual int32 CalkitManagerCalkitConnectorGetMaximumFrequency(niRFmxInstrHandle instrumentHandle, char selectorString[], float64* maximumFrequency) = 0;
  virtual int32 CalkitManagerCalkitConnectorGetMinimumFrequency(niRFmxInstrHandle instrumentHandle, char selectorString[], float64* minimumFrequency) = 0;
  virtual int32 CalkitManagerCalkitConnectorGetType(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 arraySize, char connectorType[]) = 0;
  virtual int32 CalkitManagerCalkitConnectorSetDescription(niRFmxInstrHandle instrumentHandle, char selectorString[], char description[]) = 0;
  virtual int32 CalkitManagerCalkitConnectorSetGender(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 connectorGender) = 0;
  virtual int32 CalkitManagerCalkitConnectorSetImpedance(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 impedance) = 0;
  virtual int32 CalkitManagerCalkitConnectorSetMaximumFrequency(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 maximumFrequency) = 0;
  virtual int32 CalkitManagerCalkitConnectorSetMinimumFrequency(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 minimumFrequency) = 0;
  virtual int32 CalkitManagerCalkitConnectorSetType(niRFmxInstrHandle instrumentHandle, char selectorString[], char connectorType[]) = 0;
  virtual int32 CalkitManagerCalkitGetCalibrationElementIDs(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 arraySize, char calibrationElementIDs[]) = 0;
  virtual int32 CalkitManagerCalkitGetConnectorIDs(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 arraySize, char connectorIDs[]) = 0;
  virtual int32 CalkitManagerCalkitGetDescription(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 arraySize, char calkitDescription[]) = 0;
  virtual int32 CalkitManagerCalkitGetLRLLineAutoChar(niRFmxInstrHandle instrumentHandle, char selectorString[], int32* autoCharacterizationEnabled) = 0;
  virtual int32 CalkitManagerCalkitGetTRLReferencePlane(niRFmxInstrHandle instrumentHandle, char selectorString[], int32* referencePlane) = 0;
  virtual int32 CalkitManagerCalkitGetVersion(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 arraySize, char calkitVersion[]) = 0;
  virtual int32 CalkitManagerCalkitRemoveCalibrationElement(niRFmxInstrHandle instrumentHandle, char selectorString[], char calibrationElementID[]) = 0;
  virtual int32 CalkitManagerCalkitRemoveConnector(niRFmxInstrHandle instrumentHandle, char selectorString[], char connectorID[]) = 0;
  virtual int32 CalkitManagerCalkitSetDescription(niRFmxInstrHandle instrumentHandle, char selectorString[], char calkitDescription[]) = 0;
  virtual int32 CalkitManagerCalkitSetLRLLineAutoChar(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 autoCharacterizationEnabled) = 0;
  virtual int32 CalkitManagerCalkitSetTRLReferencePlane(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 referencePlane) = 0;
  virtual int32 CalkitManagerCalkitSetVersion(niRFmxInstrHandle instrumentHandle, char selectorString[], char calkitVersion[]) = 0;
  virtual int32 CalkitManagerCreateCalkit(niRFmxInstrHandle instrumentHandle, char selectorString[], char calkitID[]) = 0;
  virtual int32 CalkitManagerExportCalkit(niRFmxInstrHandle instrumentHandle, char selectorString[], char calkitID[], char calkitFilePath[]) = 0;
  virtual int32 CalkitManagerGetCalkitIDs(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 arraySize, char calkitIDs[]) = 0;
  virtual int32 CalkitManagerImportCalkit(niRFmxInstrHandle instrumentHandle, char selectorString[], char calkitFilePath[]) = 0;
  virtual int32 CalkitManagerRemoveCalkit(niRFmxInstrHandle instrumentHandle, char selectorString[], char calkitID[]) = 0;
  virtual int32 CalkitManagerValidateCalkit(niRFmxInstrHandle instrumentHandle, char selectorString[], char calkitID[]) = 0;
  virtual int32 CalsetEmbedFixtureS2p(niRFmxInstrHandle instrumentHandle, char selectorString[], char calsetName[], char fixtureS2pFilePath[], char vnaPort[], int32 sParameterOrientation, char newCalsetName[]) = 0;
  virtual int32 CalsetGetErrorTerm(niRFmxInstrHandle instrumentHandle, char selectorString[], char calsetName[], int32 errorTermIdentifier, char measurementPort[], char sourcePort[], NIComplexSingle errorTerm[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 CalsetGetErrorTermSplit(niRFmxInstrHandle instrumentHandle, char selectorString[], char calsetName[], int32 errorTermIdentifier, char measurementPort[], char sourcePort[], float32 errorTermI[], float32 errorTermQ[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 CalsetGetFrequencyGrid(niRFmxInstrHandle instrumentHandle, char selectorString[], char calsetName[], int32 errorTermIdentifier, float64 frequencyGrid[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 CalsetLoadFromFile(niRFmxInstrHandle instrumentHandle, char selectorString[], char calsetName[], char calsetFilePath[]) = 0;
  virtual int32 CalsetSaveToFile(niRFmxInstrHandle instrumentHandle, char selectorString[], char calsetName[], char calsetFilePath[]) = 0;
  virtual int32 CfgCorrectionPortSubset(niRFmxInstrHandle instrumentHandle, char selectorString[], char portSubset[]) = 0;
  virtual int32 CfgFrequencyReference(niRFmxInstrHandle instrumentHandle, char channelName[], char frequencyReferenceSource[], float64 frequencyReferenceFrequency) = 0;
  virtual int32 CfgMechanicalAttenuation(niRFmxInstrHandle instrumentHandle, char channelName[], int32 mechanicalAttenuationAuto, float64 mechanicalAttenuationValue) = 0;
  virtual int32 CfgRFAttenuation(niRFmxInstrHandle instrumentHandle, char channelName[], int32 rfAttenuationAuto, float64 rfAttenuationValue) = 0;
  virtual int32 CheckMeasurementStatus(niRFmxInstrHandle instrumentHandle, char selectorString[], int32* isDone) = 0;
  virtual int32 ClearAllNamedResults(niRFmxInstrHandle instrumentHandle, char selectorString[]) = 0;
  virtual int32 ClearCalset(niRFmxInstrHandle instrumentHandle, char selectorString[], char calsetName[]) = 0;
  virtual int32 ClearMeasurementMemoryNames(niRFmxInstrHandle instrumentHandle, char selectorString[]) = 0;
  virtual int32 ClearNamedResult(niRFmxInstrHandle instrumentHandle, char selectorString[]) = 0;
  virtual int32 CloneSignalConfiguration(niRFmxInstrHandle instrumentHandle, char oldSignalName[], char newSignalName[]) = 0;
  virtual int32 Close(niRFmxInstrHandle instrumentHandle, int32 forceDestroy) = 0;
  virtual int32 Commit(niRFmxInstrHandle instrumentHandle, char selectorString[]) = 0;
  virtual int32 CopyCalset(niRFmxInstrHandle instrumentHandle, char selectorString[], char sourceCalsetName[], char newCalsetName[]) = 0;
  virtual int32 CopyDataToMeasurementMemory(niRFmxInstrHandle instrumentHandle, char selectorString[], char measurementMemoryName[]) = 0;
  virtual int32 CreateSignalConfiguration(niRFmxInstrHandle instrumentHandle, char signalName[]) = 0;
  virtual int32 DeleteSignalConfiguration(niRFmxInstrHandle instrumentHandle, char signalName[]) = 0;
  virtual int32 DeselectActiveCalset(niRFmxInstrHandle instrumentHandle, char selectorString[]) = 0;
  virtual int32 GetAllCalsetNames(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 arraySize, char calsetNames[]) = 0;
  virtual int32 GetAllNamedResultNames(niRFmxInstrHandle instrumentHandle, char selectorString[], char resultNames[], int32 resultNamesBufferSize, int32* actualResultNamesSize, int32* defaultResultExists) = 0;
  virtual int32 GetAttributeF32(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, float32* attrVal) = 0;
  virtual int32 GetAttributeF32Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, float32 attrVal[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 GetAttributeF64(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, float64* attrVal) = 0;
  virtual int32 GetAttributeF64Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, float64 attrVal[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 GetAttributeI16(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int16* attrVal) = 0;
  virtual int32 GetAttributeI32(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int32* attrVal) = 0;
  virtual int32 GetAttributeI32Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int32 attrVal[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 GetAttributeI64(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int64* attrVal) = 0;
  virtual int32 GetAttributeI64Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int64 attrVal[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 GetAttributeI8(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int8* attrVal) = 0;
  virtual int32 GetAttributeI8Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int8 attrVal[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 GetAttributeNIComplexDoubleArray(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, NIComplexDouble attrVal[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 GetAttributeNIComplexSingleArray(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, NIComplexSingle attrVal[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 GetAttributeString(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int32 arraySize, char attrVal[]) = 0;
  virtual int32 GetAttributeU16(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt16* attrVal) = 0;
  virtual int32 GetAttributeU32(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt32* attrVal) = 0;
  virtual int32 GetAttributeU32Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt32 attrVal[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 GetAttributeU64Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt64 attrVal[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 GetAttributeU8(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt8* attrVal) = 0;
  virtual int32 GetAttributeU8Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt8 attrVal[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 GetError(niRFmxInstrHandle instrumentHandle, int32* errorCode, int32 errorDescriptionBufferSize, char errorDescription[]) = 0;
  virtual int32 GetErrorString(niRFmxInstrHandle instrumentHandle, int32 errorCode, int32 errorDescriptionBufferSize, char errorDescription[]) = 0;
  virtual int32 GetMeasurementMemoryNames(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 arraySize, char measurementMemoryNames[]) = 0;
  virtual int32 GetMeasurementMemoryXData(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 measurementMemoryX[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 GetMeasurementMemoryYData(niRFmxInstrHandle instrumentHandle, char selectorString[], float32 measurementMemoryY1[], float32 measurementMemoryY2[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 IQFetchData(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, NIComplexSingle data[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 IQFetchDataSplit(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 dataI[], float32 dataQ[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 Initialize(char resourceName[], char optionString[], niRFmxInstrHandle* handleOut, int32* isNewSession) = 0;
  virtual int32 InitializeFromNIRFSASession(uInt32 nirfsaSession, niRFmxInstrHandle* handleOut) = 0;
  virtual int32 Initiate(niRFmxInstrHandle instrumentHandle, char selectorString[], char resultName[]) = 0;
  virtual int32 LoadDataToMeasurementMemoryFromFile(niRFmxInstrHandle instrumentHandle, char selectorString[], char filePath[], char parameter[], char measurementMemoryName[]) = 0;
  virtual int32 MarkerCfgDataSource(niRFmxInstrHandle instrumentHandle, char selectorString[], char dataSource[]) = 0;
  virtual int32 MarkerCfgMode(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 markerMode) = 0;
  virtual int32 MarkerCfgNumberOfMarkers(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 numberOfMarkers) = 0;
  virtual int32 MarkerCfgPeakSearchExcursion(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 peakExcursionEnabled, float64 peakExcursion) = 0;
  virtual int32 MarkerCfgPeakSearchThreshold(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 thresholdEnabled, float64 threshold) = 0;
  virtual int32 MarkerCfgReferenceMarker(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 referenceMarker) = 0;
  virtual int32 MarkerCfgTargetValue(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 targetValue) = 0;
  virtual int32 MarkerCfgType(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 markerType) = 0;
  virtual int32 MarkerCfgX(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 markerX) = 0;
  virtual int32 MarkerCfgY(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 markerY1, float64 markerY2) = 0;
  virtual int32 MarkerFetchX(niRFmxInstrHandle instrumentHandle, char selectorString[], float64* markerX) = 0;
  virtual int32 MarkerFetchY(niRFmxInstrHandle instrumentHandle, char selectorString[], float64* markerY1, float64* markerY2) = 0;
  virtual int32 MarkerSearch(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 searchMode) = 0;
  virtual int32 ResetAttribute(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID) = 0;
  virtual int32 ResetToDefault(niRFmxInstrHandle instrumentHandle, char selectorString[]) = 0;
  virtual int32 SParamsCfgSParameter(niRFmxInstrHandle instrumentHandle, char selectorString[], char sParameter[]) = 0;
  virtual int32 SParamsExportToSnPFile(niRFmxInstrHandle instrumentHandle, char selectorString[], char snpFilePath[]) = 0;
  virtual int32 SParamsFetchXData(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64 x[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 SParamsFetchYData(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float32 y1[], float32 y2[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 SParamsGetSParameter(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 arraySize, char sParameter[]) = 0;
  virtual int32 SelectActiveCalset(niRFmxInstrHandle instrumentHandle, char selectorString[], char calsetName[], int32 restoreConfiguration) = 0;
  virtual int32 SelectMeasurements(niRFmxInstrHandle instrumentHandle, char selectorString[], uInt32 measurements, int32 enableAllTraces) = 0;
  virtual int32 SendSoftwareEdgeTrigger(niRFmxInstrHandle instrumentHandle) = 0;
  virtual int32 SetAttributeF32(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, float32 attrVal) = 0;
  virtual int32 SetAttributeF32Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, float32 attrVal[], int32 arraySize) = 0;
  virtual int32 SetAttributeF64(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, float64 attrVal) = 0;
  virtual int32 SetAttributeF64Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, float64 attrVal[], int32 arraySize) = 0;
  virtual int32 SetAttributeI16(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int16 attrVal) = 0;
  virtual int32 SetAttributeI32(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int32 attrVal) = 0;
  virtual int32 SetAttributeI32Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int32 attrVal[], int32 arraySize) = 0;
  virtual int32 SetAttributeI64(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int64 attrVal) = 0;
  virtual int32 SetAttributeI64Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int64 attrVal[], int32 arraySize) = 0;
  virtual int32 SetAttributeI8(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int8 attrVal) = 0;
  virtual int32 SetAttributeI8Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int8 attrVal[], int32 arraySize) = 0;
  virtual int32 SetAttributeNIComplexDoubleArray(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, NIComplexDouble attrVal[], int32 arraySize) = 0;
  virtual int32 SetAttributeNIComplexSingleArray(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, NIComplexSingle attrVal[], int32 arraySize) = 0;
  virtual int32 SetAttributeString(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, char attrVal[]) = 0;
  virtual int32 SetAttributeU16(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt16 attrVal) = 0;
  virtual int32 SetAttributeU32(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt32 attrVal) = 0;
  virtual int32 SetAttributeU32Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt32 attrVal[], int32 arraySize) = 0;
  virtual int32 SetAttributeU64Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt64 attrVal[], int32 arraySize) = 0;
  virtual int32 SetAttributeU8(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt8 attrVal) = 0;
  virtual int32 SetAttributeU8Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt8 attrVal[], int32 arraySize) = 0;
  virtual int32 WaitForAcquisitionComplete(niRFmxInstrHandle instrumentHandle, float64 timeout) = 0;
  virtual int32 WaitForMeasurementComplete(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout) = 0;
  virtual int32 WavesCfgWave(niRFmxInstrHandle instrumentHandle, char selectorString[], char wave[]) = 0;
  virtual int32 WavesFetchXData(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64 x[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 WavesFetchYData(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float32 y1[], float32 y2[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 WavesGetWave(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 arraySize, char wave[]) = 0;
};

}  // namespace nirfmxvna_grpc
#endif  // NIRFMXVNA_GRPC_LIBRARY_WRAPPER_H
