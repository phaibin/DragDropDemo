/*
     File: DragDropImageView.h
 Abstract: Custom subclass of NSImageView with support for drag and drop operations.
  Version: 1.1
 
 Copyright (C) 2011 Apple Inc. All Rights Reserved.
 
 */

#import <Foundation/Foundation.h>
#import <AppKit/AppKit.h>

@protocol DragDropImageViewDelegate;

@interface DragDropImageView : NSImageView <NSDraggingSource, NSDraggingDestination, NSPasteboardItemDataProvider>
{
    //highlight the drop zone
    BOOL highlight;
}

@property BOOL allowDrag;
@property BOOL allowDrop;
@property (weak) IBOutlet id<DragDropImageViewDelegate> delegate;
@property (retain) NSString *path;

- (id)initWithCoder:(NSCoder *)coder;

@end

@protocol DragDropImageViewDelegate <NSObject>

- (void)dropComplete:(NSString *)filePath;

@end
