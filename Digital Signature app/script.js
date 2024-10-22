
        const colorPicker = document.getElementById("colorPicker");
        const canvasColor = document.getElementById("canvasColor");
        const canvas = document.getElementById("myCanvas");
        const clearButton = document.getElementById("clearButton");
        const saveButton = document.getElementById("saveButton");
        const fontPicker = document.getElementById("fontPicker");
        const retrieveButton = document.getElementById('retrieveButton');
        const ctx = canvas.getContext('2d')

        // Initialize canvas with white background
        ctx.fillStyle = "#ffffff";
        ctx.fillRect(0, 0, canvas.width, canvas.height);

        let isDrawing = false;
        let lastX = 0;
        let lastY = 0;

        colorPicker.addEventListener('change',(e)=>{
            ctx.strokeStyle = e.target.value;
            ctx.fillStyle = e.target.value;
        })

        canvas.addEventListener('mousedown',(e)=>{
            isDrawing = true;
            [lastX, lastY] = [e.offsetX, e.offsetY];
        })

        canvas.addEventListener('mousemove',(e)=>{
            if(isDrawing){
                ctx.beginPath();
                ctx.moveTo(lastX,lastY);
                ctx.lineTo(e.offsetX,e.offsetY);
                ctx.stroke();

                [lastX, lastY] = [e.offsetX, e.offsetY];
            }
        })

        canvas.addEventListener('mouseup',() => {
            isDrawing = false;
        })

        canvasColor.addEventListener('change',(e)=> {
            ctx.fillStyle = e.target.value;
            ctx.fillRect(0,0,canvas.width,canvas.height)
        })

        fontPicker.addEventListener('change',(e)=> {
            ctx.lineWidth = e.target.value
        })

        clearButton.addEventListener('click',()=> {
            ctx.fillStyle = canvasColor.value;
            ctx.fillRect(0,0,canvas.width,canvas.height)
        })

        saveButton.addEventListener('click',()=>{
            localStorage.setItem('canvasContents',canvas.toDataURL());

            let link = document.createElement('a');
            link.download = 'my-signature.png';
            link.href = canvas.toDataURL();
            link.click();
        })

        retrieveButton.addEventListener('click',()=>{
            let savedCanvas = localStorage.getItem('canvasContents');

            if(savedCanvas){
                let img = new Image();
                img.src = savedCanvas;
                img.onload = () => {
                    ctx.drawImage(img,0,0)
                }
            }
        })
 