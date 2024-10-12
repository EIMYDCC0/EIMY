body {
    font-family: Arial, sans-serif;
    background-color: #f5f5f5;
    margin: 0;
    padding: 0;
}

header {
    background-color: #d35400;
    color: white;
    text-align: center;
    padding: 2em;
}

#productos {
    display: flex;
    justify-content: center;
    margin: 2em;
}

.producto {
    background-color: white;
    padding: 1em;
    border-radius: 8px;
    box-shadow: 0 2px 10px rgba(0, 0, 0, 0.1);
    margin: 1em;
    text-align: center;
    width: 300px;
}

.producto img {
    width: 100%;
    border-radius: 8px;
}

button {
    background-color: #27ae60;
    color: white;
    padding: 0.5em;
    border: none;
    border-radius: 5px;
    cursor: pointer;
}

button:hover {
    background-color: #2ecc71;
}

form {
    display: flex;
    flex-direction: column;
    margin: 2em auto;
    width: 50%;
}

label {
    margin: 1em 0 0.5em;
}

input {
    padding: 0.5em;
    border-radius: 5px;
    border: 1px solid #ccc;
}

footer {
    background-color: #d35400;
    color: white;
    text-align: center;
    padding: 1em;
    margin-top: 2em;
}
