(function () {
    let arr = [1, 2, 3, 4, 5, 6];

    // map function gets three args in every iteration - value, index, and array

    Array.prototype.myMap = function (callback) {
        let result = [];
        for (let index = 0; index < this.length; index++) { //`this` is the new array itself in every iteration
            result.push(callback(this[index], index, this))
        }
        return result;
    }


    let res = arr.myMap(v => v * 2);
    console.log(res);
})();