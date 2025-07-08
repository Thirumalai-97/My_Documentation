# app.py

from flask import Flask, request, render_template
import joblib
import numpy as np

app = Flask(__name__)
model = joblib.load('model.pkl')

@app.route('/')
def home():
    return render_template('index.html')

@app.route('/predict', methods=['POST'])
def predict():
    data = [float(request.form[f'feature{i}']) for i in range(1, 5)]
    prediction = model.predict([data])[0]
    return render_template('index.html', prediction_text=f"Predicted Iris class: {prediction}")

if __name__ == "__main__":
    app.run(debug=True)