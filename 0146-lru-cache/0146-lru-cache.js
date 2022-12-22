/**
 * @param {number} capacity
 */
var LRUCache = function(capacity) {
    this.cache = new Map();
    this.capacity = capacity;
};

/** 
 * @param {number} key
 * @return {number}
 */
LRUCache.prototype.get = function(key) {
    
    if(!this.cache.has(key)) return -1;
    
    const val = this.cache.get(key);
    this.cache.delete(key);
    this.cache.set(key,val);
    
    return this.cache.get(key);
};

/** 
 * @param {number} key 
 * @param {number} value
 * @return {void}
 */
LRUCache.prototype.put = function(key, value) {
    
    if(this.cache.has(key)){
        this.cache.delete(key);
    }
    
    this.cache.set(key,value);
    
    //here using recent key next method 
    //to solve the problem very easy 
    if(this.cache.size > this.capacity){
        this.cache.delete(this.cache.keys().next().value);
    }
    
};

/** 
 * Your LRUCache object will be instantiated and called as such:
 * var obj = new LRUCache(capacity)
 * var param_1 = obj.get(key)
 * obj.put(key,value)
 */