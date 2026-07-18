.notice{
    text-align:center;
    background:#b30000;
    color:white;
    font-size:24px;
    padding:12px;
    font-weight:bold;
}

.logo{
    font-size:40px;
    font-weight:bold;
    padding:20px;
}

.logo a{
    color:white;
    text-decoration:none;
}

.menu{
    display:grid;
    grid-template-columns:repeat(2,1fr);
    gap:15px;
    padding:30px 20px; /* 버튼을 조금 아래로 내림 */
}

.menu button{
    width:100%;
    height:100px;
    font-size:24px;
    border:none;
    border-radius:15px;
    background:#222;
    color:white;
    cursor:pointer;
}

.update-title{
    margin:20px;
    font-size:30px;
}

.update{
    background:#222;
    margin:20px;
    padding:20px;
    border-radius:15px;
}

.making{
    text-align:center;
    font-size:40px;
    font-weight:bold;
    color:#ff3333;
    margin:20px 0 35px 0;
    text-shadow:0 0 10px #ff3333;
    animation: blink 1s ease-in-out infinite;
}
