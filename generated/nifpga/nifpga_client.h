
//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// EXPERIMENTAL Client convenience wrapper for NI-FPGA.
//---------------------------------------------------------------------
#ifndef NIFPGA_GRPC_CLIENT_H
#define NIFPGA_GRPC_CLIENT_H

#include <grpcpp/grpcpp.h>

#include <nifpga.grpc.pb.h>
#include <tests/utilities/client_helpers.h>

#include <memory>
#include <vector>

namespace nifpga_grpc::experimental::client {

namespace pb = ::google::protobuf;
using StubPtr = std::unique_ptr<NiFpga::Stub>;
using namespace nidevice_grpc::experimental::client;


AbortResponse abort(const StubPtr& stub, const nidevice_grpc::Session& session);
CloseResponse close(const StubPtr& stub, const nidevice_grpc::Session& session, const simple_variant<CloseAttribute, pb::uint32>& attribute);
CommitFifoConfigurationResponse commit_fifo_configuration(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& fifo);
ConfigureFifoResponse configure_fifo(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& fifo, const pb::uint32& depth);
ConfigureFifo2Response configure_fifo2(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& fifo, const pb::uint32& requested_depth);
DownloadResponse download(const StubPtr& stub, const nidevice_grpc::Session& session);
FindFifoResponse find_fifo(const StubPtr& stub, const nidevice_grpc::Session& session, const std::string& fifo_name);
FindRegisterResponse find_register(const StubPtr& stub, const nidevice_grpc::Session& session, const std::string& register_name);
GetBitfileSignatureResponse get_bitfile_signature(const StubPtr& stub, const nidevice_grpc::Session& session);
GetFifoPropertyI32Response get_fifo_property_i32(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& fifo, const simple_variant<FifoProperty, pb::uint32>& property);
GetFifoPropertyI64Response get_fifo_property_i64(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& fifo, const simple_variant<FifoProperty, pb::uint32>& property);
GetFifoPropertyU32Response get_fifo_property_u32(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& fifo, const simple_variant<FifoProperty, pb::uint32>& property);
GetFifoPropertyU64Response get_fifo_property_u64(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& fifo, const simple_variant<FifoProperty, pb::uint32>& property);
GetFpgaViStateResponse get_fpga_vi_state(const StubPtr& stub, const nidevice_grpc::Session& session);
OpenResponse open(const StubPtr& stub, const std::string& bitfile, const std::string& signature, const std::string& resource, const simple_variant<OpenAttribute, std::int32_t>& attribute, const nidevice_grpc::SessionInitializationBehavior& initialization_behavior = nidevice_grpc::SESSION_INITIALIZATION_BEHAVIOR_UNSPECIFIED);
ReadArrayBoolResponse read_array_bool(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& indicator, const pb::uint32& size);
ReadArrayDblResponse read_array_dbl(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& indicator, const pb::uint32& size);
ReadArrayI16Response read_array_i16(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& indicator, const pb::uint32& size);
ReadArrayI32Response read_array_i32(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& indicator, const pb::uint32& size);
ReadArrayI64Response read_array_i64(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& indicator, const pb::uint32& size);
ReadArrayI8Response read_array_i8(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& indicator, const pb::uint32& size);
ReadArraySglResponse read_array_sgl(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& indicator, const pb::uint32& size);
ReadArrayU16Response read_array_u16(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& indicator, const pb::uint32& size);
ReadArrayU32Response read_array_u32(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& indicator, const pb::uint32& size);
ReadArrayU64Response read_array_u64(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& indicator, const pb::uint32& size);
ReadArrayU8Response read_array_u8(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& indicator, const pb::uint32& size);
ReadBoolResponse read_bool(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& indicator);
ReadDblResponse read_dbl(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& indicator);
ReadFifoBoolResponse read_fifo_bool(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& fifo, const pb::uint32& number_of_elements, const pb::uint32& timeout);
ReadFifoDblResponse read_fifo_dbl(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& fifo, const pb::uint32& number_of_elements, const pb::uint32& timeout);
ReadFifoI16Response read_fifo_i16(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& fifo, const pb::uint32& number_of_elements, const pb::uint32& timeout);
ReadFifoI32Response read_fifo_i32(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& fifo, const pb::uint32& number_of_elements, const pb::uint32& timeout);
ReadFifoI64Response read_fifo_i64(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& fifo, const pb::uint32& number_of_elements, const pb::uint32& timeout);
ReadFifoI8Response read_fifo_i8(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& fifo, const pb::uint32& number_of_elements, const pb::uint32& timeout);
ReadFifoSglResponse read_fifo_sgl(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& fifo, const pb::uint32& number_of_elements, const pb::uint32& timeout);
ReadFifoU16Response read_fifo_u16(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& fifo, const pb::uint32& number_of_elements, const pb::uint32& timeout);
ReadFifoU32Response read_fifo_u32(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& fifo, const pb::uint32& number_of_elements, const pb::uint32& timeout);
ReadFifoU64Response read_fifo_u64(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& fifo, const pb::uint32& number_of_elements, const pb::uint32& timeout);
ReadFifoU8Response read_fifo_u8(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& fifo, const pb::uint32& number_of_elements, const pb::uint32& timeout);
ReadI16Response read_i16(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& indicator);
ReadI32Response read_i32(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& indicator);
ReadI64Response read_i64(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& indicator);
ReadI8Response read_i8(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& indicator);
ReadSglResponse read_sgl(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& indicator);
ReadU16Response read_u16(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& indicator);
ReadU32Response read_u32(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& indicator);
ReadU64Response read_u64(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& indicator);
ReadU8Response read_u8(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& indicator);
ReleaseFifoElementsResponse release_fifo_elements(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& fifo, const pb::uint32& elements);
ResetResponse reset(const StubPtr& stub, const nidevice_grpc::Session& session);
RunResponse run(const StubPtr& stub, const nidevice_grpc::Session& session, const simple_variant<RunAttribute, pb::uint32>& attribute);
SetFifoPropertyI32Response set_fifo_property_i32(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& fifo, const simple_variant<FifoProperty, pb::uint32>& property, const pb::int32& value);
SetFifoPropertyI64Response set_fifo_property_i64(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& fifo, const simple_variant<FifoProperty, pb::uint32>& property, const pb::int64& value);
SetFifoPropertyU32Response set_fifo_property_u32(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& fifo, const simple_variant<FifoProperty, pb::uint32>& property, const pb::uint32& value);
SetFifoPropertyU64Response set_fifo_property_u64(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& fifo, const simple_variant<FifoProperty, pb::uint32>& property, const pb::uint64& value);
StartFifoResponse start_fifo(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& fifo);
StopFifoResponse stop_fifo(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& fifo);
UnreserveFifoResponse unreserve_fifo(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& fifo);
WriteArrayBoolResponse write_array_bool(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& control, const std::vector<bool>& array);
WriteArrayDblResponse write_array_dbl(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& control, const std::vector<double>& array);
WriteArrayI16Response write_array_i16(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& control, const std::vector<pb::int32>& array);
WriteArrayI32Response write_array_i32(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& control, const std::vector<pb::int32>& array);
WriteArrayI64Response write_array_i64(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& control, const std::vector<pb::int64>& array);
WriteArrayI8Response write_array_i8(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& control, const std::vector<pb::int32>& array);
WriteArraySglResponse write_array_sgl(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& control, const std::vector<float>& array);
WriteArrayU16Response write_array_u16(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& control, const std::vector<pb::uint32>& array);
WriteArrayU32Response write_array_u32(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& control, const std::vector<pb::uint32>& array);
WriteArrayU64Response write_array_u64(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& control, const std::vector<pb::uint64>& array);
WriteArrayU8Response write_array_u8(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& control, const std::vector<pb::uint32>& array);
WriteBoolResponse write_bool(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& control, const bool& value);
WriteDblResponse write_dbl(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& control, const double& value);
WriteFifoBoolResponse write_fifo_bool(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& fifo, const std::vector<bool>& data, const pb::uint32& timeout);
WriteFifoDblResponse write_fifo_dbl(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& fifo, const std::vector<double>& data, const pb::uint32& timeout);
WriteFifoI16Response write_fifo_i16(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& fifo, const std::vector<pb::int32>& data, const pb::uint32& timeout);
WriteFifoI32Response write_fifo_i32(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& fifo, const std::vector<pb::int32>& data, const pb::uint32& timeout);
WriteFifoI64Response write_fifo_i64(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& fifo, const std::vector<pb::int64>& data, const pb::uint32& timeout);
WriteFifoI8Response write_fifo_i8(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& fifo, const std::vector<pb::int32>& data, const pb::uint32& timeout);
WriteFifoSglResponse write_fifo_sgl(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& fifo, const std::vector<float>& data, const pb::uint32& timeout);
WriteFifoU16Response write_fifo_u16(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& fifo, const std::vector<pb::uint32>& data, const pb::uint32& timeout);
WriteFifoU32Response write_fifo_u32(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& fifo, const std::vector<pb::uint32>& data, const pb::uint32& timeout);
WriteFifoU64Response write_fifo_u64(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& fifo, const std::vector<pb::uint64>& data, const pb::uint32& timeout);
WriteFifoU8Response write_fifo_u8(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& fifo, const std::vector<pb::uint32>& data, const pb::uint32& timeout);
WriteI16Response write_i16(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& control, const pb::int32& value);
WriteI32Response write_i32(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& control, const pb::int32& value);
WriteI64Response write_i64(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& control, const pb::int64& value);
WriteI8Response write_i8(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& control, const pb::int32& value);
WriteSglResponse write_sgl(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& control, const float& value);
WriteU16Response write_u16(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& control, const pb::uint32& value);
WriteU32Response write_u32(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& control, const pb::uint32& value);
WriteU64Response write_u64(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& control, const pb::uint64& value);
WriteU8Response write_u8(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& control, const pb::uint32& value);

} // namespace nifpga_grpc::experimental::client

#endif /* NIFPGA_GRPC_CLIENT_H */
