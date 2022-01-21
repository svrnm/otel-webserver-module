// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: opentelemetry/proto/collector/metrics/v1/metrics_service.proto

#include "opentelemetry/proto/collector/metrics/v1/metrics_service.pb.h"
#include "opentelemetry/proto/collector/metrics/v1/metrics_service.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace opentelemetry {
namespace proto {
namespace collector {
namespace metrics {
namespace v1 {

static const char* MetricsService_method_names[] = {
  "/opentelemetry.proto.collector.metrics.v1.MetricsService/Export",
};

std::unique_ptr< MetricsService::Stub> MetricsService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< MetricsService::Stub> stub(new MetricsService::Stub(channel));
  return stub;
}

MetricsService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_Export_(MetricsService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status MetricsService::Stub::Export(::grpc::ClientContext* context, const ::opentelemetry::proto::collector::metrics::v1::ExportMetricsServiceRequest& request, ::opentelemetry::proto::collector::metrics::v1::ExportMetricsServiceResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::opentelemetry::proto::collector::metrics::v1::ExportMetricsServiceRequest, ::opentelemetry::proto::collector::metrics::v1::ExportMetricsServiceResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_Export_, context, request, response);
}

void MetricsService::Stub::experimental_async::Export(::grpc::ClientContext* context, const ::opentelemetry::proto::collector::metrics::v1::ExportMetricsServiceRequest* request, ::opentelemetry::proto::collector::metrics::v1::ExportMetricsServiceResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::opentelemetry::proto::collector::metrics::v1::ExportMetricsServiceRequest, ::opentelemetry::proto::collector::metrics::v1::ExportMetricsServiceResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Export_, context, request, response, std::move(f));
}

void MetricsService::Stub::experimental_async::Export(::grpc::ClientContext* context, const ::opentelemetry::proto::collector::metrics::v1::ExportMetricsServiceRequest* request, ::opentelemetry::proto::collector::metrics::v1::ExportMetricsServiceResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Export_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::opentelemetry::proto::collector::metrics::v1::ExportMetricsServiceResponse>* MetricsService::Stub::PrepareAsyncExportRaw(::grpc::ClientContext* context, const ::opentelemetry::proto::collector::metrics::v1::ExportMetricsServiceRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::opentelemetry::proto::collector::metrics::v1::ExportMetricsServiceResponse, ::opentelemetry::proto::collector::metrics::v1::ExportMetricsServiceRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_Export_, context, request);
}

::grpc::ClientAsyncResponseReader< ::opentelemetry::proto::collector::metrics::v1::ExportMetricsServiceResponse>* MetricsService::Stub::AsyncExportRaw(::grpc::ClientContext* context, const ::opentelemetry::proto::collector::metrics::v1::ExportMetricsServiceRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncExportRaw(context, request, cq);
  result->StartCall();
  return result;
}

MetricsService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MetricsService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MetricsService::Service, ::opentelemetry::proto::collector::metrics::v1::ExportMetricsServiceRequest, ::opentelemetry::proto::collector::metrics::v1::ExportMetricsServiceResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](MetricsService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::opentelemetry::proto::collector::metrics::v1::ExportMetricsServiceRequest* req,
             ::opentelemetry::proto::collector::metrics::v1::ExportMetricsServiceResponse* resp) {
               return service->Export(ctx, req, resp);
             }, this)));
}

MetricsService::Service::~Service() {
}

::grpc::Status MetricsService::Service::Export(::grpc::ServerContext* context, const ::opentelemetry::proto::collector::metrics::v1::ExportMetricsServiceRequest* request, ::opentelemetry::proto::collector::metrics::v1::ExportMetricsServiceResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace opentelemetry
}  // namespace proto
}  // namespace collector
}  // namespace metrics
}  // namespace v1

