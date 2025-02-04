const OnnxStandardType = @import("OnnxStandardType.zig").OnnxStandardType;
const OnnxTensorShape = @import("OnnxTensorShape.zig").OnnxTensorShape;
const OnnxAttributeType = @import("OnnxAttributeType.zig").OnnxAttributeType;

const OnnxStandardTensor = struct {
    elem_type: OnnxAttributeType,
    shape: OnnxTensorShape,
};

const OnnxStandardSparseTensor = struct {
    elem_type: OnnxAttributeType,
    shape: OnnxTensorShape,
};

pub const OnnxStandardUnion = union(OnnxStandardType) {
    NOT_SET: void,
    TENSOR_TYPE: OnnxStandardTensor,
    SEQUENCE_TYPE: void, // Unsupported for now
    MAP_TYPE: void, // Unsupported for now
    OPTIONAL_TYPE: void, // Unsupported for now
    SPARSE_TENSOR_TYPE: OnnxStandardSparseTensor,
};
