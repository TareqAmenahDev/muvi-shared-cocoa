#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class MuviSharedAlternativeItem, MuviSharedModifiersCustomization, MuviSharedAlternativeCustomization, MuviSharedModifierItem, MuviSharedConcessionItemDetails, MuviSharedModifierGroupsCustomization, MuviSharedChildItemsCustomization, MuviSharedCartItem, MuviSharedConcessionItem, MuviSharedAddOnItem, MuviSharedModifiersGroup, MuviSharedUpsellingGroup, MuviSharedPackageChildItem, MuviSharedUpsellingItem, MuviSharedConcessionTab, MuviSharedFoodMenuItem, MuviSharedUpsellingItemSize, MuviSharedKotlinEnumCompanion, MuviSharedKotlinEnum<E>, MuviSharedKotlinArray<T>, MuviSharedConcessionsCart, MuviSharedKotlinThrowable, MuviSharedKotlinException, MuviSharedKotlinRuntimeException, MuviSharedKotlinIllegalStateException;

@protocol MuviSharedKotlinx_coroutines_coreCoroutineScope, MuviSharedKotlinx_coroutines_coreStateFlow, MuviSharedKotlinComparable, MuviSharedKotlinCoroutineContext, MuviSharedKotlinx_coroutines_coreFlowCollector, MuviSharedKotlinx_coroutines_coreFlow, MuviSharedKotlinx_coroutines_coreSharedFlow, MuviSharedKotlinIterator, MuviSharedKotlinCoroutineContextElement, MuviSharedKotlinCoroutineContextKey;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface MuviSharedBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface MuviSharedBase (MuviSharedBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface MuviSharedMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface MuviSharedMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorMuviSharedKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface MuviSharedNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface MuviSharedByte : MuviSharedNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface MuviSharedUByte : MuviSharedNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface MuviSharedShort : MuviSharedNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface MuviSharedUShort : MuviSharedNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface MuviSharedInt : MuviSharedNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface MuviSharedUInt : MuviSharedNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface MuviSharedLong : MuviSharedNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface MuviSharedULong : MuviSharedNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface MuviSharedFloat : MuviSharedNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface MuviSharedDouble : MuviSharedNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface MuviSharedBoolean : MuviSharedNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end


/**
 * @note annotations
 *   kotlin.js.ExperimentalJsExport
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GreetingClass")))
@interface MuviSharedGreetingClass : MuviSharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)greeting __attribute__((swift_name("greeting()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlternativeCustomization")))
@interface MuviSharedAlternativeCustomization : MuviSharedBase
- (instancetype)initWithAlternativeItem:(MuviSharedAlternativeItem *)alternativeItem modifiersCustomization:(MuviSharedModifiersCustomization * _Nullable)modifiersCustomization __attribute__((swift_name("init(alternativeItem:modifiersCustomization:)"))) __attribute__((objc_designated_initializer));
- (MuviSharedAlternativeCustomization *)doCopyAlternativeItem:(MuviSharedAlternativeItem *)alternativeItem modifiersCustomization:(MuviSharedModifiersCustomization * _Nullable)modifiersCustomization __attribute__((swift_name("doCopy(alternativeItem:modifiersCustomization:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isValidToAddToCart __attribute__((swift_name("isValidToAddToCart()")));
- (MuviSharedAlternativeCustomization *)selectModifierAndCloneIndex:(int32_t)index modifier:(MuviSharedModifierItem *)modifier __attribute__((swift_name("selectModifierAndClone(index:modifier:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MuviSharedAlternativeItem *alternativeItem __attribute__((swift_name("alternativeItem")));
@property (readonly) MuviSharedModifiersCustomization * _Nullable modifiersCustomization __attribute__((swift_name("modifiersCustomization")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CartItem")))
@interface MuviSharedCartItem : MuviSharedBase
- (instancetype)initWithConcessionCartItem:(MuviSharedConcessionItemDetails *)concessionCartItem isOfferItem:(BOOL)isOfferItem quantity:(int32_t)quantity alternativeCustomization:(MuviSharedAlternativeCustomization * _Nullable)alternativeCustomization modifierGroupsCustomization:(MuviSharedModifierGroupsCustomization * _Nullable)modifierGroupsCustomization childItemsCustomization:(MuviSharedChildItemsCustomization * _Nullable)childItemsCustomization addToCartTimestamp:(int64_t)addToCartTimestamp __attribute__((swift_name("init(concessionCartItem:isOfferItem:quantity:alternativeCustomization:modifierGroupsCustomization:childItemsCustomization:addToCartTimestamp:)"))) __attribute__((objc_designated_initializer));
- (MuviSharedCartItem *)doCopyConcessionCartItem:(MuviSharedConcessionItemDetails *)concessionCartItem isOfferItem:(BOOL)isOfferItem quantity:(int32_t)quantity alternativeCustomization:(MuviSharedAlternativeCustomization * _Nullable)alternativeCustomization modifierGroupsCustomization:(MuviSharedModifierGroupsCustomization * _Nullable)modifierGroupsCustomization childItemsCustomization:(MuviSharedChildItemsCustomization * _Nullable)childItemsCustomization addToCartTimestamp:(int64_t)addToCartTimestamp __attribute__((swift_name("doCopy(concessionCartItem:isOfferItem:quantity:alternativeCustomization:modifierGroupsCustomization:childItemsCustomization:addToCartTimestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t addToCartTimestamp __attribute__((swift_name("addToCartTimestamp")));
@property (readonly) MuviSharedAlternativeCustomization * _Nullable alternativeCustomization __attribute__((swift_name("alternativeCustomization")));
@property (readonly) MuviSharedChildItemsCustomization * _Nullable childItemsCustomization __attribute__((swift_name("childItemsCustomization")));
@property (readonly) MuviSharedConcessionItemDetails *concessionCartItem __attribute__((swift_name("concessionCartItem")));
@property (readonly) BOOL isOfferItem __attribute__((swift_name("isOfferItem")));
@property (readonly) MuviSharedModifierGroupsCustomization * _Nullable modifierGroupsCustomization __attribute__((swift_name("modifierGroupsCustomization")));
@property (readonly) int32_t quantity __attribute__((swift_name("quantity")));
@property (readonly) NSString * _Nullable showingImageUrl __attribute__((swift_name("showingImageUrl")));
@property (readonly) double singleItemPrice __attribute__((swift_name("singleItemPrice")));
@property (readonly) double totalPrice __attribute__((swift_name("totalPrice")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChildItemsCustomization")))
@interface MuviSharedChildItemsCustomization : MuviSharedBase
- (instancetype)initWithMap:(NSDictionary<NSString *, NSDictionary<MuviSharedInt *, MuviSharedAlternativeCustomization *> *> *)map __attribute__((swift_name("init(map:)"))) __attribute__((objc_designated_initializer));
- (MuviSharedChildItemsCustomization *)doCopyMap:(NSDictionary<NSString *, NSDictionary<MuviSharedInt *, MuviSharedAlternativeCustomization *> *> *)map __attribute__((swift_name("doCopy(map:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isValidToUseWithConcessionItemConcessionItemDetails:(MuviSharedConcessionItemDetails *)concessionItemDetails __attribute__((swift_name("isValidToUseWithConcessionItem(concessionItemDetails:)")));
- (MuviSharedChildItemsCustomization *)selectAndCloneItemId:(NSString *)itemId index:(int32_t)index alternativeCustomization:(MuviSharedAlternativeCustomization *)alternativeCustomization __attribute__((swift_name("selectAndClone(itemId:index:alternativeCustomization:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<NSString *, NSDictionary<MuviSharedInt *, MuviSharedAlternativeCustomization *> *> *map __attribute__((swift_name("map")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConcessionsCart")))
@interface MuviSharedConcessionsCart : MuviSharedBase
- (instancetype)initWithCoroutineScope:(id<MuviSharedKotlinx_coroutines_coreCoroutineScope>)coroutineScope __attribute__((swift_name("init(coroutineScope:)"))) __attribute__((objc_designated_initializer));
- (void)addCartItemsListFoodItems:(NSArray<MuviSharedCartItem *> *)foodItems __attribute__((swift_name("addCartItemsList(foodItems:)")));
- (void)addItemConcessionCartItem:(MuviSharedConcessionItemDetails *)concessionCartItem quantity:(int32_t)quantity alternativeCustomization:(MuviSharedAlternativeCustomization * _Nullable)alternativeCustomization modifierGroupsCustomization:(MuviSharedModifierGroupsCustomization * _Nullable)modifierGroupsCustomization childItemsCustomization:(MuviSharedChildItemsCustomization * _Nullable)childItemsCustomization isOfferItem:(BOOL)isOfferItem __attribute__((swift_name("addItem(concessionCartItem:quantity:alternativeCustomization:modifierGroupsCustomization:childItemsCustomization:isOfferItem:)")));
- (void)clearCart __attribute__((swift_name("clearCart()")));
- (MuviSharedInt * _Nullable)getConcessionItemQuantityItemId:(NSString *)itemId __attribute__((swift_name("getConcessionItemQuantity(itemId:)")));
- (int32_t)getItemsCount __attribute__((swift_name("getItemsCount()")));
- (NSArray<MuviSharedCartItem *> *)itemsList __attribute__((swift_name("itemsList()")));
- (void)removeCartItemCartItem:(MuviSharedCartItem *)cartItem __attribute__((swift_name("removeCartItem(cartItem:)")));
- (void)removeConcessionItemConcessionItemDetails:(MuviSharedConcessionItem *)concessionItemDetails __attribute__((swift_name("removeConcessionItem(concessionItemDetails:)")));
- (void)replaceConcessionItemCartListNewItems:(NSArray<MuviSharedCartItem *> *)newItems removeItemCondition:(MuviSharedBoolean *(^)(MuviSharedCartItem *))removeItemCondition __attribute__((swift_name("replaceConcessionItemCartList(newItems:removeItemCondition:)")));
@property (readonly) id<MuviSharedKotlinx_coroutines_coreStateFlow> itemsListAsState __attribute__((swift_name("itemsListAsState")));
@property (readonly) id<MuviSharedKotlinx_coroutines_coreStateFlow> totalCountAsState __attribute__((swift_name("totalCountAsState")));
@property (readonly) id<MuviSharedKotlinx_coroutines_coreStateFlow> totalPriceAsState __attribute__((swift_name("totalPriceAsState")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConcessionsCartList")))
@interface MuviSharedConcessionsCartList : MuviSharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addCartItemsListFoodItems:(NSArray<MuviSharedCartItem *> *)foodItems __attribute__((swift_name("addCartItemsList(foodItems:)")));
- (void)addItemConcessionCartItem:(MuviSharedConcessionItemDetails *)concessionCartItem quantity:(int32_t)quantity alternativeCustomization:(MuviSharedAlternativeCustomization * _Nullable)alternativeCustomization modifierGroupsCustomization:(MuviSharedModifierGroupsCustomization * _Nullable)modifierGroupsCustomization childItemsCustomization:(MuviSharedChildItemsCustomization * _Nullable)childItemsCustomization isOfferItem:(BOOL)isOfferItem __attribute__((swift_name("addItem(concessionCartItem:quantity:alternativeCustomization:modifierGroupsCustomization:childItemsCustomization:isOfferItem:)")));
- (void)clearCart __attribute__((swift_name("clearCart()")));
- (MuviSharedInt * _Nullable)getConcessionItemQuantityItemId:(NSString *)itemId __attribute__((swift_name("getConcessionItemQuantity(itemId:)")));
- (int32_t)getItemsCount __attribute__((swift_name("getItemsCount()")));
- (NSArray<MuviSharedCartItem *> *)itemsList __attribute__((swift_name("itemsList()")));
- (void)removeCartItemCartItem:(MuviSharedCartItem *)cartItem __attribute__((swift_name("removeCartItem(cartItem:)")));
- (void)removeConcessionItemConcessionItemDetails:(MuviSharedConcessionItem *)concessionItemDetails __attribute__((swift_name("removeConcessionItem(concessionItemDetails:)")));
- (void)replaceConcessionItemCartListNewItems:(NSArray<MuviSharedCartItem *> *)newItems removeItemCondition:(MuviSharedBoolean *(^)(MuviSharedCartItem *))removeItemCondition __attribute__((swift_name("replaceConcessionItemCartList(newItems:removeItemCondition:)")));
@property (readonly) double totalPrice __attribute__((swift_name("totalPrice")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModifierGroupsCustomization")))
@interface MuviSharedModifierGroupsCustomization : MuviSharedBase
- (instancetype)initWithMap:(NSDictionary<NSString *, MuviSharedModifiersCustomization *> *)map __attribute__((swift_name("init(map:)"))) __attribute__((objc_designated_initializer));
- (MuviSharedModifierGroupsCustomization *)doCopyMap:(NSDictionary<NSString *, MuviSharedModifiersCustomization *> *)map __attribute__((swift_name("doCopy(map:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isValidToUseWithConcessionItemConcessionItemDetails:(MuviSharedConcessionItemDetails *)concessionItemDetails __attribute__((swift_name("isValidToUseWithConcessionItem(concessionItemDetails:)")));
- (MuviSharedModifierGroupsCustomization *)selectAndCloneModifierGroupId:(NSString *)modifierGroupId index:(int32_t)index modifier:(MuviSharedModifierItem *)modifier __attribute__((swift_name("selectAndClone(modifierGroupId:index:modifier:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<NSString *, MuviSharedModifiersCustomization *> *map __attribute__((swift_name("map")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModifiersCustomization")))
@interface MuviSharedModifiersCustomization : MuviSharedBase
- (instancetype)initWithModifierByIndexMap:(NSDictionary<MuviSharedInt *, MuviSharedModifierItem *> *)modifierByIndexMap __attribute__((swift_name("init(modifierByIndexMap:)"))) __attribute__((objc_designated_initializer));
- (MuviSharedModifiersCustomization *)doCopyModifierByIndexMap:(NSDictionary<MuviSharedInt *, MuviSharedModifierItem *> *)modifierByIndexMap __attribute__((swift_name("doCopy(modifierByIndexMap:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (MuviSharedModifiersCustomization *)selectModifierAndCloneIndex:(int32_t)index modifier:(MuviSharedModifierItem *)modifier __attribute__((swift_name("selectModifierAndClone(index:modifier:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<MuviSharedInt *, MuviSharedModifierItem *> *modifierByIndexMap __attribute__((swift_name("modifierByIndexMap")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddOnItem")))
@interface MuviSharedAddOnItem : MuviSharedBase
- (instancetype)initWithId:(NSString *)id name:(NSString *)name concessionItem:(MuviSharedConcessionItem * _Nullable)concessionItem __attribute__((swift_name("init(id:name:concessionItem:)"))) __attribute__((objc_designated_initializer));
- (MuviSharedAddOnItem *)doCopyId:(NSString *)id name:(NSString *)name concessionItem:(MuviSharedConcessionItem * _Nullable)concessionItem __attribute__((swift_name("doCopy(id:name:concessionItem:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MuviSharedConcessionItem * _Nullable concessionItem __attribute__((swift_name("concessionItem")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlternativeItem")))
@interface MuviSharedAlternativeItem : MuviSharedBase
- (instancetype)initWithId:(NSString *)id name:(NSString * _Nullable)name imageUrl:(NSString * _Nullable)imageUrl price:(MuviSharedDouble * _Nullable)price calories:(MuviSharedInt * _Nullable)calories isVegan:(MuviSharedBoolean * _Nullable)isVegan modifierGroups:(MuviSharedModifiersGroup * _Nullable)modifierGroups isOutOfStock:(BOOL)isOutOfStock __attribute__((swift_name("init(id:name:imageUrl:price:calories:isVegan:modifierGroups:isOutOfStock:)"))) __attribute__((objc_designated_initializer));
- (MuviSharedAlternativeItem *)doCopyId:(NSString *)id name:(NSString * _Nullable)name imageUrl:(NSString * _Nullable)imageUrl price:(MuviSharedDouble * _Nullable)price calories:(MuviSharedInt * _Nullable)calories isVegan:(MuviSharedBoolean * _Nullable)isVegan modifierGroups:(MuviSharedModifiersGroup * _Nullable)modifierGroups isOutOfStock:(BOOL)isOutOfStock __attribute__((swift_name("doCopy(id:name:imageUrl:price:calories:isVegan:modifierGroups:isOutOfStock:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MuviSharedInt * _Nullable calories __attribute__((swift_name("calories")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable imageUrl __attribute__((swift_name("imageUrl")));
@property (readonly) BOOL isOutOfStock __attribute__((swift_name("isOutOfStock")));
@property (readonly) MuviSharedBoolean * _Nullable isVegan __attribute__((swift_name("isVegan")));
@property (readonly) MuviSharedModifiersGroup * _Nullable modifierGroups __attribute__((swift_name("modifierGroups")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) MuviSharedDouble * _Nullable price __attribute__((swift_name("price")));
@end

__attribute__((swift_name("ConcessionItem")))
@interface MuviSharedConcessionItem : MuviSharedBase
- (instancetype)initWithId:(NSString *)id name:(NSString * _Nullable)name description:(NSString * _Nullable)description imageUrl:(NSString * _Nullable)imageUrl price:(MuviSharedDouble * _Nullable)price calories:(MuviSharedInt * _Nullable)calories isVegan:(MuviSharedBoolean * _Nullable)isVegan isOutOfStock:(BOOL)isOutOfStock alternatives:(NSArray<MuviSharedAlternativeItem *> *)alternatives upsellingGroup:(MuviSharedUpsellingGroup * _Nullable)upsellingGroup __attribute__((swift_name("init(id:name:description:imageUrl:price:calories:isVegan:isOutOfStock:alternatives:upsellingGroup:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSArray<MuviSharedAlternativeItem *> *alternatives __attribute__((swift_name("alternatives")));
@property (readonly) MuviSharedInt * _Nullable calories __attribute__((swift_name("calories")));
@property (readonly) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable imageUrl __attribute__((swift_name("imageUrl")));
@property (readonly) BOOL isOutOfStock __attribute__((swift_name("isOutOfStock")));
@property (readonly) MuviSharedBoolean * _Nullable isVegan __attribute__((swift_name("isVegan")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) MuviSharedDouble * _Nullable price __attribute__((swift_name("price")));
@property (readonly) NSString *showingName __attribute__((swift_name("showingName")));
@property (readonly) double startingFromPrice __attribute__((swift_name("startingFromPrice")));
@property (readonly) MuviSharedUpsellingGroup * _Nullable upsellingGroup __attribute__((swift_name("upsellingGroup")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConcessionItemDetails")))
@interface MuviSharedConcessionItemDetails : MuviSharedConcessionItem
- (instancetype)initWithId:(NSString *)id name:(NSString * _Nullable)name description:(NSString * _Nullable)description imageUrl:(NSString * _Nullable)imageUrl price:(MuviSharedDouble * _Nullable)price calories:(MuviSharedInt * _Nullable)calories isVegan:(MuviSharedBoolean * _Nullable)isVegan isOutOfStock:(BOOL)isOutOfStock alternatives:(NSArray<MuviSharedAlternativeItem *> *)alternatives upsellingGroup:(MuviSharedUpsellingGroup * _Nullable)upsellingGroup modifierGroups:(NSArray<MuviSharedModifiersGroup *> *)modifierGroups packageChildItems:(NSArray<MuviSharedPackageChildItem *> *)packageChildItems upsellingItems:(NSArray<MuviSharedUpsellingItem *> *)upsellingItems addOns:(NSArray<MuviSharedAddOnItem *> *)addOns __attribute__((swift_name("init(id:name:description:imageUrl:price:calories:isVegan:isOutOfStock:alternatives:upsellingGroup:modifierGroups:packageChildItems:upsellingItems:addOns:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithId:(NSString *)id name:(NSString * _Nullable)name description:(NSString * _Nullable)description imageUrl:(NSString * _Nullable)imageUrl price:(MuviSharedDouble * _Nullable)price calories:(MuviSharedInt * _Nullable)calories isVegan:(MuviSharedBoolean * _Nullable)isVegan isOutOfStock:(BOOL)isOutOfStock alternatives:(NSArray<MuviSharedAlternativeItem *> *)alternatives upsellingGroup:(MuviSharedUpsellingGroup * _Nullable)upsellingGroup __attribute__((swift_name("init(id:name:description:imageUrl:price:calories:isVegan:isOutOfStock:alternatives:upsellingGroup:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MuviSharedConcessionItemDetails *)doCopyId:(NSString *)id name:(NSString * _Nullable)name description:(NSString * _Nullable)description imageUrl:(NSString * _Nullable)imageUrl price:(MuviSharedDouble * _Nullable)price calories:(MuviSharedInt * _Nullable)calories isVegan:(MuviSharedBoolean * _Nullable)isVegan isOutOfStock:(BOOL)isOutOfStock alternatives:(NSArray<MuviSharedAlternativeItem *> *)alternatives upsellingGroup:(MuviSharedUpsellingGroup * _Nullable)upsellingGroup modifierGroups:(NSArray<MuviSharedModifiersGroup *> *)modifierGroups packageChildItems:(NSArray<MuviSharedPackageChildItem *> *)packageChildItems upsellingItems:(NSArray<MuviSharedUpsellingItem *> *)upsellingItems addOns:(NSArray<MuviSharedAddOnItem *> *)addOns __attribute__((swift_name("doCopy(id:name:description:imageUrl:price:calories:isVegan:isOutOfStock:alternatives:upsellingGroup:modifierGroups:packageChildItems:upsellingItems:addOns:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (double)getTotalPriceItemCount:(int32_t)itemCount selectedModifierGroupsCustomization:(MuviSharedModifierGroupsCustomization *)selectedModifierGroupsCustomization selectedAlternative:(MuviSharedAlternativeCustomization * _Nullable)selectedAlternative __attribute__((swift_name("getTotalPrice(itemCount:selectedModifierGroupsCustomization:selectedAlternative:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isCustomizationValidToUseWithConcessionItemSelectedModifierGroupsCustomization:(MuviSharedModifierGroupsCustomization *)selectedModifierGroupsCustomization selectedPackageChileItemsCustomization:(MuviSharedChildItemsCustomization *)selectedPackageChileItemsCustomization selectedAlternative:(MuviSharedAlternativeCustomization * _Nullable)selectedAlternative __attribute__((swift_name("isCustomizationValidToUseWithConcessionItem(selectedModifierGroupsCustomization:selectedPackageChileItemsCustomization:selectedAlternative:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<MuviSharedAddOnItem *> *addOns __attribute__((swift_name("addOns")));
@property (readonly) NSArray<MuviSharedAlternativeItem *> *alternatives __attribute__((swift_name("alternatives")));
@property (readonly) MuviSharedInt * _Nullable calories __attribute__((swift_name("calories")));
@property (readonly) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable imageUrl __attribute__((swift_name("imageUrl")));
@property (readonly) BOOL isOutOfStock __attribute__((swift_name("isOutOfStock")));
@property (readonly) MuviSharedBoolean * _Nullable isVegan __attribute__((swift_name("isVegan")));
@property (readonly) NSArray<MuviSharedModifiersGroup *> *modifierGroups __attribute__((swift_name("modifierGroups")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSArray<MuviSharedPackageChildItem *> *packageChildItems __attribute__((swift_name("packageChildItems")));
@property (readonly) MuviSharedDouble * _Nullable price __attribute__((swift_name("price")));
@property (readonly) BOOL shouldUseStartingFromLabel __attribute__((swift_name("shouldUseStartingFromLabel")));
@property (readonly) MuviSharedUpsellingGroup * _Nullable upsellingGroup __attribute__((swift_name("upsellingGroup")));
@property (readonly) NSArray<MuviSharedUpsellingItem *> *upsellingItems __attribute__((swift_name("upsellingItems")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConcessionTab")))
@interface MuviSharedConcessionTab : MuviSharedBase
- (instancetype)initWithId:(NSString *)id name:(NSString *)name imageUrl:(NSString * _Nullable)imageUrl __attribute__((swift_name("init(id:name:imageUrl:)"))) __attribute__((objc_designated_initializer));
- (MuviSharedConcessionTab *)doCopyId:(NSString *)id name:(NSString *)name imageUrl:(NSString * _Nullable)imageUrl __attribute__((swift_name("doCopy(id:name:imageUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable imageUrl __attribute__((swift_name("imageUrl")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FoodMenuItem")))
@interface MuviSharedFoodMenuItem : MuviSharedBase
- (instancetype)initWithId:(NSString *)id thumbnailUrl:(NSString * _Nullable)thumbnailUrl fileUrl:(NSString *)fileUrl __attribute__((swift_name("init(id:thumbnailUrl:fileUrl:)"))) __attribute__((objc_designated_initializer));
- (MuviSharedFoodMenuItem *)doCopyId:(NSString *)id thumbnailUrl:(NSString * _Nullable)thumbnailUrl fileUrl:(NSString *)fileUrl __attribute__((swift_name("doCopy(id:thumbnailUrl:fileUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *fileUrl __attribute__((swift_name("fileUrl")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable thumbnailUrl __attribute__((swift_name("thumbnailUrl")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModifierItem")))
@interface MuviSharedModifierItem : MuviSharedBase
- (instancetype)initWithId:(NSString *)id name:(NSString * _Nullable)name price:(MuviSharedDouble * _Nullable)price isOutOfStock:(BOOL)isOutOfStock __attribute__((swift_name("init(id:name:price:isOutOfStock:)"))) __attribute__((objc_designated_initializer));
- (MuviSharedModifierItem *)doCopyId:(NSString *)id name:(NSString * _Nullable)name price:(MuviSharedDouble * _Nullable)price isOutOfStock:(BOOL)isOutOfStock __attribute__((swift_name("doCopy(id:name:price:isOutOfStock:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL isOutOfStock __attribute__((swift_name("isOutOfStock")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) MuviSharedDouble * _Nullable price __attribute__((swift_name("price")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModifiersGroup")))
@interface MuviSharedModifiersGroup : MuviSharedBase
- (instancetype)initWithId:(NSString *)id name:(NSString * _Nullable)name vistaId:(NSString * _Nullable)vistaId maximumQuantity:(MuviSharedInt * _Nullable)maximumQuantity minimumQuantity:(MuviSharedInt * _Nullable)minimumQuantity modifiers:(NSArray<MuviSharedModifierItem *> *)modifiers __attribute__((swift_name("init(id:name:vistaId:maximumQuantity:minimumQuantity:modifiers:)"))) __attribute__((objc_designated_initializer));
- (MuviSharedModifiersGroup *)doCopyId:(NSString *)id name:(NSString * _Nullable)name vistaId:(NSString * _Nullable)vistaId maximumQuantity:(MuviSharedInt * _Nullable)maximumQuantity minimumQuantity:(MuviSharedInt * _Nullable)minimumQuantity modifiers:(NSArray<MuviSharedModifierItem *> *)modifiers __attribute__((swift_name("doCopy(id:name:vistaId:maximumQuantity:minimumQuantity:modifiers:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) MuviSharedInt * _Nullable maximumQuantity __attribute__((swift_name("maximumQuantity")));
@property (readonly) MuviSharedInt * _Nullable minimumQuantity __attribute__((swift_name("minimumQuantity")));
@property (readonly) NSArray<MuviSharedModifierItem *> *modifiers __attribute__((swift_name("modifiers")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable vistaId __attribute__((swift_name("vistaId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PackageChildItem")))
@interface MuviSharedPackageChildItem : MuviSharedBase
- (instancetype)initWithId:(NSString *)id name:(NSString * _Nullable)name quantity:(MuviSharedInt * _Nullable)quantity concessionItemId:(NSString * _Nullable)concessionItemId alternatives:(NSArray<MuviSharedAlternativeItem *> *)alternatives __attribute__((swift_name("init(id:name:quantity:concessionItemId:alternatives:)"))) __attribute__((objc_designated_initializer));
- (MuviSharedPackageChildItem *)doCopyId:(NSString *)id name:(NSString * _Nullable)name quantity:(MuviSharedInt * _Nullable)quantity concessionItemId:(NSString * _Nullable)concessionItemId alternatives:(NSArray<MuviSharedAlternativeItem *> *)alternatives __attribute__((swift_name("doCopy(id:name:quantity:concessionItemId:alternatives:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<MuviSharedAlternativeItem *> *alternatives __attribute__((swift_name("alternatives")));
@property (readonly) NSString * _Nullable concessionItemId __attribute__((swift_name("concessionItemId")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) MuviSharedInt * _Nullable quantity __attribute__((swift_name("quantity")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpsellingGroup")))
@interface MuviSharedUpsellingGroup : MuviSharedBase
- (instancetype)initWithParentConcessionItemId:(NSString *)parentConcessionItemId name:(NSString *)name __attribute__((swift_name("init(parentConcessionItemId:name:)"))) __attribute__((objc_designated_initializer));
- (MuviSharedUpsellingGroup *)doCopyParentConcessionItemId:(NSString *)parentConcessionItemId name:(NSString *)name __attribute__((swift_name("doCopy(parentConcessionItemId:name:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *parentConcessionItemId __attribute__((swift_name("parentConcessionItemId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpsellingItem")))
@interface MuviSharedUpsellingItem : MuviSharedBase
- (instancetype)initWithId:(NSString *)id concessionItemId:(NSString *)concessionItemId sort:(int32_t)sort isDefault:(BOOL)isDefault size:(MuviSharedUpsellingItemSize *)size concessionItem:(MuviSharedConcessionItem *)concessionItem __attribute__((swift_name("init(id:concessionItemId:sort:isDefault:size:concessionItem:)"))) __attribute__((objc_designated_initializer));
- (MuviSharedUpsellingItem *)doCopyId:(NSString *)id concessionItemId:(NSString *)concessionItemId sort:(int32_t)sort isDefault:(BOOL)isDefault size:(MuviSharedUpsellingItemSize *)size concessionItem:(MuviSharedConcessionItem *)concessionItem __attribute__((swift_name("doCopy(id:concessionItemId:sort:isDefault:size:concessionItem:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MuviSharedConcessionItem *concessionItem __attribute__((swift_name("concessionItem")));
@property (readonly) NSString *concessionItemId __attribute__((swift_name("concessionItemId")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL isDefault __attribute__((swift_name("isDefault")));
@property (readonly) MuviSharedUpsellingItemSize *size __attribute__((swift_name("size")));
@property (readonly) int32_t sort __attribute__((swift_name("sort")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol MuviSharedKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface MuviSharedKotlinEnum<E> : MuviSharedBase <MuviSharedKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MuviSharedKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpsellingItemSize")))
@interface MuviSharedUpsellingItemSize : MuviSharedKotlinEnum<MuviSharedUpsellingItemSize *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MuviSharedUpsellingItemSize *small __attribute__((swift_name("small")));
@property (class, readonly) MuviSharedUpsellingItemSize *medium __attribute__((swift_name("medium")));
@property (class, readonly) MuviSharedUpsellingItemSize *large __attribute__((swift_name("large")));
+ (MuviSharedKotlinArray<MuviSharedUpsellingItemSize *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MuviSharedUpsellingItemSize *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t weight __attribute__((swift_name("weight")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FBMockData")))
@interface MuviSharedFBMockData : MuviSharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) MuviSharedAlternativeCustomization *alternativeCustomization __attribute__((swift_name("alternativeCustomization")));
@property (readonly) MuviSharedAlternativeCustomization *alternativeCustomization2 __attribute__((swift_name("alternativeCustomization2")));
@property (readonly) NSArray<MuviSharedAlternativeItem *> *alternativesList __attribute__((swift_name("alternativesList")));
@property (readonly) MuviSharedCartItem *cartItem __attribute__((swift_name("cartItem")));
@property (readonly) MuviSharedCartItem *cartItem2 __attribute__((swift_name("cartItem2")));
@property (readonly) MuviSharedConcessionItemDetails *concessionItemDetails __attribute__((swift_name("concessionItemDetails")));
@property (readonly) NSArray<MuviSharedConcessionTab *> *mockConcessionTabs __attribute__((swift_name("mockConcessionTabs")));
@property (readonly) NSArray<MuviSharedConcessionItemDetails *> *mockDetailsConcessionItemsList __attribute__((swift_name("mockDetailsConcessionItemsList")));
@property (readonly) NSArray<MuviSharedModifierItem *> *modifiersList __attribute__((swift_name("modifiersList")));
@end

@interface MuviSharedCartItem (Extensions)
- (BOOL)isCustomized __attribute__((swift_name("isCustomized()")));
@end

@interface MuviSharedModifierGroupsCustomization (Extensions)
- (double)getModifierPrices __attribute__((swift_name("getModifierPrices()")));
@end

@interface MuviSharedConcessionItem (Extensions)
- (MuviSharedConcessionItemDetails *)toConcessionItemDetails __attribute__((swift_name("toConcessionItemDetails()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CartItemKt")))
@interface MuviSharedCartItemKt : MuviSharedBase
+ (BOOL)isEquals:(NSArray<MuviSharedCartItem *> *)receiver otherList:(NSArray<MuviSharedCartItem *> *)otherList __attribute__((swift_name("isEquals(_:otherList:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConcessionsCartKt")))
@interface MuviSharedConcessionsCartKt : MuviSharedBase
+ (MuviSharedConcessionsCart *)createConcessionCartInstance __attribute__((swift_name("createConcessionCartInstance()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConcessionsCartExtensionsKt")))
@interface MuviSharedConcessionsCartExtensionsKt : MuviSharedBase
+ (int32_t)getConcessionItemQuantity:(NSArray<MuviSharedCartItem *> *)receiver itemId:(NSString *)itemId __attribute__((swift_name("getConcessionItemQuantity(_:itemId:)")));
+ (int32_t)getConcessionItemQuantityByUpsellingGroup:(NSArray<MuviSharedCartItem *> *)receiver concessionItem:(MuviSharedConcessionItem *)concessionItem __attribute__((swift_name("getConcessionItemQuantityByUpsellingGroup(_:concessionItem:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GreetingClassKt")))
@interface MuviSharedGreetingClassKt : MuviSharedBase
+ (NSString *)greeting __attribute__((swift_name("greeting()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MapExtensionsKt")))
@interface MuviSharedMapExtensionsKt : MuviSharedBase
+ (BOOL)deepEquals:(NSDictionary<id, id> * _Nullable)receiver other:(NSDictionary<id, id> * _Nullable)other __attribute__((swift_name("deepEquals(_:other:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol MuviSharedKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<MuviSharedKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol MuviSharedKotlinx_coroutines_coreFlow
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<MuviSharedKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSharedFlow")))
@protocol MuviSharedKotlinx_coroutines_coreSharedFlow <MuviSharedKotlinx_coroutines_coreFlow>
@required
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreStateFlow")))
@protocol MuviSharedKotlinx_coroutines_coreStateFlow <MuviSharedKotlinx_coroutines_coreSharedFlow>
@required
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface MuviSharedKotlinEnumCompanion : MuviSharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MuviSharedKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface MuviSharedKotlinArray<T> : MuviSharedBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(MuviSharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<MuviSharedKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinCoroutineContext")))
@protocol MuviSharedKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<MuviSharedKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<MuviSharedKotlinCoroutineContextElement> _Nullable)getKey:(id<MuviSharedKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<MuviSharedKotlinCoroutineContext>)minusKeyKey:(id<MuviSharedKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<MuviSharedKotlinCoroutineContext>)plusContext:(id<MuviSharedKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface MuviSharedKotlinThrowable : MuviSharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MuviSharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MuviSharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (MuviSharedKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MuviSharedKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface MuviSharedKotlinException : MuviSharedKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MuviSharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MuviSharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface MuviSharedKotlinRuntimeException : MuviSharedKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MuviSharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MuviSharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface MuviSharedKotlinIllegalStateException : MuviSharedKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MuviSharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MuviSharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface MuviSharedKotlinCancellationException : MuviSharedKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MuviSharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MuviSharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol MuviSharedKotlinx_coroutines_coreFlowCollector
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol MuviSharedKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol MuviSharedKotlinCoroutineContextElement <MuviSharedKotlinCoroutineContext>
@required
@property (readonly) id<MuviSharedKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol MuviSharedKotlinCoroutineContextKey
@required
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
