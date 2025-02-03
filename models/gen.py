import numpy as np
import onnx
import onnx.helper as helper
from onnx import TensorProto

# Define tensors and nodes
input_tensor = helper.make_tensor_value_info('input', TensorProto.FLOAT, [1, 3])
fixed_tensor = helper.make_tensor('fixed', TensorProto.FLOAT, [1, 3], np.array([1.0, 2.0, 3.0], dtype=np.float32))
output_tensor = helper.make_tensor_value_info('output', TensorProto.FLOAT, [1, 3])

# Create the add node
add_node = helper.make_node('Add', inputs=['input', 'fixed'], outputs=['output'])

# Define the graph
graph_def = helper.make_graph(
    nodes=[add_node],
    name='AddGraph',
    inputs=[input_tensor],
    outputs=[output_tensor],
    initializer=[fixed_tensor]
)

# Create the model
model_def = helper.make_model(graph_def, producer_name='onnx-add-example')

# Save the model to file
onnx.save(model_def, 'add_fixed_tensor.onnx')

