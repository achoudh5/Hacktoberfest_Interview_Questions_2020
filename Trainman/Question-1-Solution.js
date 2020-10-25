(function () {
    let arr = [1, 1, 2, 4, 5, 2];
    let map = {};

    let res = arr.filter(a => {
        return map.hasOwnProperty(a) ? false : map[a] = true
    });

    console.log(res)

})();

