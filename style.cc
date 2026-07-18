/* 전체 화면 */
body{
    margin:0;
    background:#111;
    color:white;
    font-family:Arial, sans-serif;
}

/* HUNT 로고 */
.logo{
    font-size:42px;
    font-weight:bold;
    padding:20px;
}

.logo a{
    color:white;
    text-decoration:none;
}

/* 제작중 */
.making{
    text-align:center;
    font-size:40px;
    font-weight:bold;
    color:#ff3333;
    margin:10px 0 30px 0;
    text-shadow:0 0 10px #ff3333;
    animation:blink 1s ease-in-out infinite;
}

/* 깜빡임 */
@keyframes blink{
    0%{opacity:1;}
    50%{opacity:0.3;}
    100%{opacity:1;}
}

/* 메뉴 버튼 */
.menu{
    display:grid;
    grid-template-columns:repeat(2,1fr);
    gap:15px;
    padding:20px;
}

.menu a{
    text-decoration:none;
}

.menu button{
    width:100%;
    height:100px;
    border:none;
    border-radius:15px;
    background:#222;
    color:white;
    font-size:24px;
    font-weight:bold;
    cursor:pointer;
    transition:0.2s;
}

.menu button:hover{
    background:#333;
    transform:scale(1.03);
}

/* 업데이트 제목 */
.update-title{
    font-size:32px;
    margin:20px;
}

/* 업데이트 카드 */
.update{
    background:#222;
    margin:20px;
    padding:20px;
    border-radius:15px;
    border-left:5px solid #00c853;
}

.update h3{
    margin:0;
    font-size:24px;
}

.update p{
    margin:10px 0;
}

.update small{
    color:#aaa;
}

/* PC에서는 버튼 4개 한 줄 */
@media (min-width:900px){
    .menu{
        grid-template-columns:repeat(4,1fr);
    }
}
