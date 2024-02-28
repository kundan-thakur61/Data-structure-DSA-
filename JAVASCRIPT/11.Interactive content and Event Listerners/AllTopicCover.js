/*
1.interactive content 
2.Specifying events
3. The onload Event handler
4.The mouse handler
5.The event target property
6.DOM event flow
7.onchange and onblur
8.The key Event flow
9.Drag and drop element10Form Submission
11.Animating element
*/


/* ..............2.Specifying Events............ */
// thre are three ways to specifying events
// i.Specifying events with HTML
// ii.two are javascript based
// exxamples:
// i.specifying events with HTML

// e,.g:<p id="onclick="magic()">click here for magic!</p>

/*
ii.sPECIFYING events with javascript*/
document.getElementById("unique").onclick=function(){magic();};

/**practice exercise 11.1 
http://127.0.0.1:5500/.vscode/HTML-JAVASCRIPTS/11.Interactive%20content%20and%20Event%20Listerners/practice.html

*/

/*...........Specifying events with event Listeners..............*/
// addEventListeners()
document.getElementById("unique").addEventListener("click",magic);
                        or
document.getElementById("uunique").addEventListener("click",function(){magic(args1,args2)})

/*...........The onload Event handler.............*/
window.onload=function()
{

}
document.addEventListener("DOMContentLoaded",(e)=>
{

});

// <body onload="unique()"></body>

/*...........Mouse event handlers.............*/
/**
 * There are different mouse event handlers. Mouse events are actions of the mouse. 
These are the ones we have:
• ondblclick: when the mouse is double-clicked
• onmousedown: when the mouse clicks on top of an element without the click 
being released
• onmouseup: when the mouse click on top of an element is released
• onmouseenter: when the mouse moves onto an element
• onmouseleave: when the mouse leaves an element and all of its children
• onmousemove: when the mouse moves over an element
• onmouseout: when the mouse leaves an individual element 
• onmouseover: when the mouse hovers over an element*/


/*...........THE EVENT TARGET PROPERTY.............*/
console.dir(evet);