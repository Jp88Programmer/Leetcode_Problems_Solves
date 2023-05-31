class EventEmitter {

lists = {};
  subscribe(event, cb) {
      
      if(this.lists[event])
        this.lists[event].push(cb)
      else
          this.lists[event] = [cb];
    return {
        unsubscribe: () => {
            if(this.lists[event] && this.lists[event].length > 1)
                this.lists[event].pop();
            else
                delete this.lists[event];
        }
    };
  }

  emit(event, args = []) {
    
      if(this.lists[event])
          return this.lists[event].map(fn => fn(...args));
      return [];
  }
}

/**
 * const emitter = new EventEmitter();
 *
 * // Subscribe to the onClick event with onClickCallback
 * function onClickCallback() { return 99 }
 * const sub = emitter.subscribe('onClick', onClickCallback);
 *
 * emitter.emit('onClick'); // [99]
 * sub.unsubscribe(); // undefined
 * emitter.emit('onClick'); // []
 */