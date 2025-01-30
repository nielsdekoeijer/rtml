import onnx
import json

# Load the ONNX model
model = onnx.load('mnist-8.onnx')

# Convert the model's protobuf structure to a dictionary
print(onnx.helper.printable_graph(model.graph))
