import axios from "axios";

export async function getAPI(url){
    const result =await axios.get(url)
    return result
}