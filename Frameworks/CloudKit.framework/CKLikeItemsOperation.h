/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CloudKit.framework/CloudKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableDictionary, NSArray, NSMutableArray, CKShareID;

@interface CKLikeItemsOperation : CKOperation  {
    CKShareID *_shareID;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _likeItemsCompletionBlock;

    NSMutableDictionary *_itemsToLikeByID;
    NSMutableDictionary *_itemsToUnlikeByID;
    NSMutableArray *_likedItems;
    NSMutableArray *_unlikedItems;
    NSMutableDictionary *_errorsByItemID;
}

@property(copy) NSArray * itemsToLike;
@property(copy) NSArray * itemsToUnlike;
@property(copy) CKShareID * shareID;
@property(copy) id likeItemsCompletionBlock;
@property(retain) NSMutableDictionary * itemsToLikeByID;
@property(retain) NSMutableDictionary * itemsToUnlikeByID;
@property(retain) NSMutableArray * likedItems;
@property(retain) NSMutableArray * unlikedItems;
@property(retain) NSMutableDictionary * errorsByItemID;


- (id)itemsToUnlike;
- (id)itemsToLike;
- (id)likeItemsCompletionBlock;
- (void)setUnlikedItems:(id)arg1;
- (id)unlikedItems;
- (void)setLikedItems:(id)arg1;
- (id)likedItems;
- (void)setItemsToUnlikeByID:(id)arg1;
- (id)itemsToUnlikeByID;
- (void)setItemsToLikeByID:(id)arg1;
- (id)itemsToLikeByID;
- (void)setItemsToUnlike:(id)arg1;
- (void)setItemsToLike:(id)arg1;
- (void)setLikeItemsCompletionBlock:(id)arg1;
- (id)initWithItemsToLike:(id)arg1 itemsToUnlike:(id)arg2 inShareWithID:(id)arg3;
- (void)setErrorsByItemID:(id)arg1;
- (id)errorsByItemID;
- (void)setShareID:(id)arg1;
- (id)shareID;
- (void)_handleProgressCallback:(id)arg1;
- (void)performCKOperation;
- (bool)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (void).cxx_destruct;

@end