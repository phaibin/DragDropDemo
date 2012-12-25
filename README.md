Using is as easy as dropping "DragDropImageView.h" and "DragDropImageView.m" in, replacing some classes... you know. The usual. This is just a subclass of NSImageView. 

*All credit to [phaibin]("https://github.com/phaibin/DragDropDemo"). I just added support for images without a NSBitmapImageRep, aka. generated images or system images, and helped it support ARC better.* **From phaibin's README:**

-

This is a demo for adding dragging and dropping for NSImageView. The "DragDropImageView" was from Apple's example ["CocoaDragAndDrop"](http://developer.apple.com/library/mac/#samplecode/CocoaDragAndDrop/Introduction/Intro.html).

CocoaDragAndDrop shows how to drag image from finder to NSImageView and drag image between NSImageViews. But it don't show how to drag from NSImageView to finder and save the image. 

I added some code to ""DragDropImageView" to show how to do it. And I added two properties: allowDrag and allowDrop. They can control if the NSImageView can drag or drop.
