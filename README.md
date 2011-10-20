This is a demo for adding dragging and dropping for NSImageView. The "DragDropImageView" was from Apple's example ["CocoaDragAndDrop"](http://developer.apple.com/library/mac/#samplecode/CocoaDragAndDrop/Introduction/Intro.html).

CocoaDragAndDrop shows how to drag image from finder to NSImageView and drag image between NSImageViews. But it don't show how to drag from NSImageView to finder and save the image. 

I added some code to ""DragDropImageView" to show how to do it. And I added two properties: allowDrag and allowDrop. They can control if the NSImageView can drag or drop.